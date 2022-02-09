/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on February 8, 2022, 5:17 PM
 * Purpose: Clue V8
 */

//System Level Libraries

#include <cmath>     //Math Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time to set random seed
#include <fstream>   //FileLibrary
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
#include <vector>   //Vectors Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units

//Function Prototypes
void print(string [], int);
void locRoom();
bool accus(int &, int&, int&, int, int, int);
bool check(int, int, string &, string []);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Local Constants
    const string file = "SuspectList.txt";                       //String for file names
    const string lEnd = ".*";                                    //String for new line in input
    
    const int size1 = 6;
    const int size2 = 9;
    
    //Strings
    string cha[size1];                                           //Strings for all the playable characters
    string wpons[size1];                                         //Strings for all of the weapons
    string rooms[size2];                                         //Strings for all of the rooms 
    string killer, wpon, room;                                   //Strings for the killer, the weapon used, and room used
    string pRoom, spect;                                         //String for room player is in and who they suspect
    
    
    //Integers
    int choice;                                                  //User input for player to pick suspect and character
    int dice;                                                    //Dice
    int slct1, slct2, slct3;                                     //Integers for case file picks
    int ac1, ac2, ac3, sus;                                      //Integers for user accusations or suspects
    int vPos, hPos;                                              //Integers for player position
    int pick;                                                    //Integer for player hint
    
    //Floats
    float hint;                                                  //Float for player hint
    
    //Chars
    char ch;                                                     //User input for player to answer questions 
    
    //Booleans
    bool win, inRoom;                                            //Booleans for player win and for if player is in a room
    
    //Set strings to name of players
    cha[0] = "Colonel Mustard";
    cha[1] = "Miss Scarlet";
    cha[2] = "Professor Plum";
    cha[3] = "Mr. Green";
    cha[4] = "Mrs. White";
    cha[5] = "Mrs. Peacock";
    
    //Set strings to name of weapons
    wpons[0] = "Rope";
    wpons[1] = "Lead Pipe";
    wpons[2] = "Knife";
    wpons[3] = "Wrench";
    wpons[4] = "Candlestick";
    wpons[5] = "Revolver";
    
    //Set strings to name of rooms
    rooms[0] = "Conservatory";
    rooms[1] = "Billiard Room";
    rooms[2] = "Library";
    rooms[3] = "Study";
    rooms[4] = "Ballroom";
    rooms[5] = "Hall";
    rooms[6] = "Kitchen";
    rooms[7] = "Dining Room";
    rooms[8] = "Lounge";
    
    //Initialize boolean
    win = false;
    
    //fstream
    fstream out;
    fstream input;
    
    //Player selection
    do{
        //List of players
        cout<<"   Players List"<<endl;
        print(cha, size1);
        cout<<"\nWhich player would you like to play as?"<<endl;     //User choice
        cin>>choice;
        cout<<endl;
    
        if(choice < 1 || choice > 6) //Input Validation 
        {
            cout<<"Not a Valid Option";
                   exit(1);
        }   
    
        switch(choice){ //Setting character
            case 1:{
                cout<<"You are "<<cha[0]<<endl;
                vPos = 17;
                hPos = 23;
                break;
            }
            case 2:{
                cout<<"You are "<<cha[1]<<endl;
                vPos = 24;
                hPos = 16;
                break;
            }
            case 3:{ 
                cout<<"You are "<<cha[2]<<endl;
                vPos = 19;
                hPos = 0;
                break;
            }
            case 4:{ 
                cout<<"You are "<<cha[3]<<endl;
                vPos = 0;
                hPos = 9;
                break;
            }
            case 5:{
                cout<<"You are "<<cha[4]<<endl;
                vPos = 0;
                hPos = 14;
                break;
            }
            case 6:{
                cout<<"You are "<<cha[5]<<endl;
                vPos = 6;
                hPos = 0;
                break;
            }
        }
        //Character conformation
        cout<<"Is this the character you want? (y or n)"<<endl;
        cin>>ch;
        
    }while(choice == 'n' || choice == 'N');
    
    //Case File - Who, with what, where
    slct1 = rand()%6; 
    killer = cha[slct1];
    
    slct2 = rand()%6;
    wpon = wpons[slct2];
    
    slct3 = rand()%9;
    room = rooms[slct3];
    
    //Open file to place suspect
    out.open(file, ios:: out);
    
    //Game play
    do{
        //output player location
        cout<<"\nYou are at v-"<<vPos<<" h-"<<hPos<<endl;
        
        //Output room locations
        locRoom();
        
        //Player choice
        cout<<"Would you like to make an accusation? (y or n)"<<endl;
        cin>>ch;
        
        //Provide accusation choices
        if(ch == 'y' || ch == 'Y'){
            //List players to choose from
            cout<<"\n   Players List"<<endl;
            print(cha, size1);
            
            //List weapons to choose from
            cout<<"\n   Weapons List"<<endl;
            print(wpons, size1);
            
            //List rooms to choose from
            print(rooms, size2);
            
            //User accusation 
            cout<<"Choose a person, a weapon, and a room - (Ex. 1 1 1 would pick "<<cha[0]<<" & "<<wpons[0]<<" & "<<rooms[0]<<")"<<endl;
            cin>>ac1>>ac2>>ac3;
            if(ac1 == slct1 && ac2 == slct2 && ac3 == slct3)
            {
                win = true;    //if all accusations are true player wins
            }
            else{
                cout<<"\nYour accusation is incorrect"<<endl;
            }
        }
        //Else continue game
        else{
            //Dice rolling
            cout<<"\nRolling Dice..."<<endl;
            dice = rand()%12+1;
            cout<<"You rolled a "<<dice<<endl;
            
            //User movement
            for(int i=0; i <dice; i++){
                //Output player location
                cout<<"Your position is v-"<<vPos<<", h-"<<hPos<<endl;
                
                //Output room locations
                locRoom();
        
                //Player movement
                cout<<"\nYou have "<<dice-i<<" spaces left to move."<<endl;
                cout<<"Would you like to move up, down, left, right, or not at all? (u, d, l, r, n)"<<endl;
                cin>>ch;
                if(ch == 'u' || ch == 'U'){       //Moving up
                    vPos++;
                    if(vPos > 24){
                        cout<<"You cannot move that way"<<endl;
                        vPos--;
                        i--;
                    } 
                }
                else if(ch == 'd' || ch == 'D'){  //Moving down
                    vPos--;
                    if(vPos < 0){
                        cout<<"You cannot move that way"<<endl;
                        vPos++;
                        i--;
                    }      
                }
                else if(ch == 'l' || ch == 'L'){  //Moving to the left
                    hPos--;
                    if(hPos < 0){
                        cout<<"You cannot move that way"<<endl;
                        hPos++;
                        i--;
                    }       
                }
                else if(ch == 'r' || ch == 'R'){  //Moving to the right
                    hPos++;
                    if(hPos > 23){
                        cout<<"You cannot move that way"<<endl;
                        hPos--;
                        i--;
                    }      
                }
                else if(ch == 'n' || ch == 'N'){  //Not moving
                    i = dice;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                    i--;
                }
            }
            //Is character in a room
            inRoom = check(vPos, hPos, pRoom, rooms);
            
            //Initialize hint
            hint = sqrt(pow(vPos, 3));
            
            //Giving player semi-random hint
            if(static_cast<int>(hint) == 70){
                cout<<"You have received a hint:"<<endl;
                //Initialize hint
                pick = dice / 2;
                
                //Pick hint to give
                if(slct1 == pick){
                    pick++;
                }
                spect = cha[pick];
                cout<<spect<<" is not a suspect."<<endl;
                out<<spect<<" is not a suspect .*"<<endl;
            }
                
            
            if(inRoom == true){ //Player is in room
                cout<<"\nYou are in "<<pRoom<<endl;
                //Does user know who, what, and where?
                cout<<"Would you like to make an accusation?(y or n)"<<endl;
                cin>>ch;
                if(ch == 'y' || ch == 'Y')//Provide Accusation choices 
                {
                    //List players to choose from
                    cout<<"\n   Players List"<<endl;
                    print(cha, size1);
            
                    //List weapons to choose from
                    print(wpons, size1);
                    
                    //User accusation
                    cout<<"Choose a person and a weapon - (Ex. 1 1 would pick "<<cha[0]<<" & "<<wpons[0]<<")"<<endl;
                    cin>>ac1>>ac2;
                    if(ac1 == slct1 && ac2 == slct2 && pRoom == room)
                    {
                         win = true;     //If all accusation are true player win
                    }
                    else
                    {
                        cout<<"Your accusation is incorrect"<<endl;
                    }
                }
                else{
                    //Does user suspect and item or person
                    cout<<"Would you like to name a suspect? (y or n)"<<endl;
                    cin>>ch;
                    if(ch == 'y' || ch == 'Y'){  //Provide list of suspect
                        //List players to choose from
                        cout<<"\n   Players List"<<endl;
                        print(cha, size1);
            
                        //List weapons to choose from
                        cout<<"\n   Weapons List"<<endl;
                        print(wpons, size1);
            
                        //List rooms to choose from
                        cout<<"\n     Rooms List"<<endl;
                        print(rooms, size2);
                        cout<<"Choose who or what you suspect - (Ex. 1 would pick "<<cha[0]<<")"<<endl;
                        cin>>choice;
                    }
                        
                        //Determine is user suspicion correct
                        if(choice < 6){  //Character suspect
                            if(choice != slct1){
                                cout<<"This is not a suspect. A user has this character."<<endl;
                                //Pick suspect to print to file
                                spect = cha[choice];
                                //Print suspect to file
                                out<<spect<< " is not a suspect .*"<<endl;
                            }
                            else{
                                cout<<"No user has this character. This is a suspect."<<endl;
                                //Print killer to file
                                out<<killer<<" is the killer .*"<<endl;
                            }
                                
                        }
                        else if(choice >= 6 && choice < 12){ //Weapon suspect
                            if(choice - 6 != slct2){
                                cout<<"This is not the weapon used. A user has this weapon."<<endl;
                                //Pick suspect to print to file
                                 spect = wpons[choice - 6];
                                //Print suspect to file
                                out<<spect<< " is not the weapon used .*"<<endl;
                            }
                            else{
                                cout<<"No user has this weapon. This is a weapon used."<<endl;
                                //Print weapon to file
                                out<<wpon<<" is the weapon used .*"<<endl;
                            }
                        }
                        else if(choice >=12 && choice <21){ //Room suspect
                            if(choice - 12 != slct3){
                                cout<<"This is not where the murder happened. A user has this room."<<endl;
                                //Pick suspect to print to file
                                spect = rooms[choice - 12];
                                //Print suspect to file
                                out<<spect<< " is not where the murder happened .*"<<endl;
                            }
                            else{
                                cout<<"No user has this room. This is where the murder happened."<<endl;
                                //Print room to file
                                out<<"The "<<room<<" is where the murder happened .*"<<endl;
                            }
                        }
                        
                }         
            }
            else
            {
                cout<<"You are not in any room"<<endl;                 //User is not in a room
            } 
            cout<<"\nWould you like to see your suspect list? (y or n)"<<endl;
            cin>>ch;
            if(ch == 'y' || ch == 'Y'){
                //Open file
                input.open(file.c_str(), ios::in);
                
                //Display user suspect list
                while(input>>spect){
                    if(spect == lEnd)
                        cout<<endl;
                    else
                        cout<<spect<<" ";
                }
                
                //Close file
                input.close();  
            }
        }
    }while(win == false); //Continue until player wins
    
    //Close file
    out.close();
    
    //Display outputs
    cout<<"You won!"<<endl;
    cout<<"The killer was "<<killer<<" the weapon was "<<wpon<<" and it happened in the "<<room<<" room."<<endl;
  
    //Exit the program
    return 0;
}

void print(string inp[], int size){
    for(int i = 0; i < size; i++)
        cout<<i<<" - "<<setw(15)<<inp[i]<<endl;
}

void locRoom(){
    cout<<"\nRoom                  | Vertical Location | Horizontal Location |"<<endl;
    cout<<"Conservatory          | between  0 and  5 | between    0 and  5 |"<<endl;
    cout<<"Billiard Room         | between  8 and 12 | between    0 and  5 |"<<endl;
    cout<<"Library               | between 14 and 18 | between    0 and  6 |"<<endl;
    cout<<"Study                 | between 21 and 24 | between    0 and  6 |"<<endl;
    cout<<"Ballroom              | between  0 and  7 | between    8 and 15 |"<<endl;
    cout<<"Hall                  | between 18 and 24 | between    9 and 14 |"<<endl;
    cout<<"Kitchen               | between  0 and  6 | between   18 and 23 |"<<endl;
    cout<<"Dining Room           | between  9 and 15 | between   16 and 23 |"<<endl;
    cout<<"Lounge                | between 19 and 24 | between   17 and 23 |"<<endl;
}

bool check(int vPos, int hPos, string &pRoom, string inp[]){
    bool inRoom;
    if((vPos>=0 && vPos<=5) && (hPos>=0 && hPos<=5)){         //Conservatory
        inRoom = true;
        pRoom = inp[0];
    }
    else if((vPos>= 8 && vPos<=12) && (hPos>=0 && hPos<=5)){  //Billiard Room
        inRoom = true;
        pRoom = inp[1];
    }
    else if((vPos>=14 && vPos<=18)&& (hPos>=0 && hPos<=6)){   //Library 
        inRoom = true;
        pRoom = inp[2];
    }
    else if((vPos>=21 && vPos<=24) && (hPos>=0 && hPos<=6)){  //Study
        inRoom = true;
        pRoom = inp[3];
    }
    else if((vPos>=0 && vPos<=7) && (hPos>=8 && hPos<=15)){   //Ballroom
        inRoom = true;
        pRoom = inp[4];
    }
    else if((vPos>=18 && vPos<=24) && (hPos>=9 && hPos<=14)){ //Hall
        inRoom = true;
        pRoom = inp[5];
    }
    else if((vPos>=0 && vPos<= 6) && (hPos>=18 && hPos<=23)){ //Kitchen
        inRoom = true;
        pRoom = inp[6];
    }
    else if((vPos>=9 && vPos<=15) && (hPos>=16 && hPos<=23)){ //Dining Room
        inRoom = true;
        pRoom = inp[7];
    }
    else if((vPos>=19 && vPos<=24) && (hPos>=17 && hPos<=23)){ //Lounge
        inRoom = true;
        pRoom = inp[8];
    }
    else{
        inRoom = false;
    }
    return inRoom;
}

bool accus(int &ac1, int &ac2, int &ac3, int slc1, int slc2, int slc3){
    bool match = true;
    cin>>ac1>>ac2>>ac3;
    if(ac1 != slc1)
        match = false;
    else if(ac2 != slc2)
        match = false;
    else if(ac3 != slc3)
        match = false;
    return match;
}
