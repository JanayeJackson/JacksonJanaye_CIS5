/*
 * 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on February 9, 2022, 9:45 PM
 * Purpose: Clue V11
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
bool accus(int &, int&, int&, int, int, int);
bool check(int, int, string &, string []);
int setLoc(char, int &, string[]);
void locRoom();
void print(string [], int);
void print(string [][4], int = 0, int = 0, int = 0, int = 0);
void setCha(string[]);
void setWpon(string[]);
void setRoom(string[]);
void suspect(vector<string>, vector<string>, vector<string>, vector<string>, string [][4]);
void readIn(fstream &, string &);
void readTo(fstream &, string, string, string);


//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Local Constants
    const string file = "SuspectList.txt";                       //String for file names
    
    const int size1 = 6;
    const int size2 = 9;
    
    //String arrays
    string cha[size1];                                           //Strings for all the playable characters
    string wpons[size1];                                         //Strings for all of the weapons
    string rooms[size2];                                         //Strings for all of the rooms 
    string susp[15][4];
    
    //String vectors
    vector<string> kill, wpn, rm, guilty;
    
    //Strings
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
    setCha(cha);
    
    
    //Set strings to name of weapons
    setWpon(wpons);
    
    //Set strings to name of rooms
    setRoom(rooms);
    
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
    
        hPos = setLoc(choice, vPos, cha);
        
        //Character conformation
        cout<<"Is this the character you want? (y or n)"<<endl;
        cin>>ch;
        
    }while(ch == 'n' || ch == 'N');
    
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
                readTo(out, cha[ac1], wpons[ac2], rooms[ac3]);
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
                kill.push_back(spect);
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
                        readTo(out, cha[ac1], wpons[ac2], pRoom);
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
                                //Add Suspect to vector
                                kill.push_back(cha[choice]);
                                
                            }
                            else{
                                cout<<"No user has this character. This is a suspect."<<endl;
                                //Add killer to vector
                                guilty.push_back(cha[choice]);
                            }
                                
                        }
                        else if(choice >= 6 && choice < 12){ //Weapon suspect
                            if(choice - 6 != slct2){
                                cout<<"This is not the weapon used. A user has this weapon."<<endl;
                                //Add weapon to vector
                                wpn.push_back(wpons[choice - 6]);
                            }
                            else{
                                cout<<"No user has this weapon. This is a weapon used."<<endl;
                                //Add weapon to vector
                                guilty.push_back(wpons[choice - 6]);
                            }
                        }
                        else if(choice >=12 && choice <21){ //Room suspect
                            if(choice - 12 != slct3){
                                cout<<"This is not where the murder happened. A user has this room."<<endl;
                                //Add room to vector
                                rm.push_back(rooms[choice - 12]);
                            }
                            else{
                                cout<<"No user has this room. This is where the murder happened."<<endl;
                                //Add room to vector
                                guilty.push_back(rooms[choice - 12]);
                            }
                        }
                        
                }         
            }
            else
            {
                cout<<"You are not in any room"<<endl;                 //User is not in a room
            } 
            
            suspect(kill, wpn, rm, guilty, susp);
            
            cout<<"\nWould you like to see your accusation list? (y or n)"<<endl;
            cin>>ch;
            if(ch == 'y' || ch == 'Y'){
                //Open file
                input.open(file.c_str(), ios::in);
                readIn(input, spect);
                //Close file
                input.close();  
            }       
            cout<<"\nWould you like to see your suspect list? (y or n)"<<endl;
            cin>>ch;
            if(ch == 'y' || ch == 'Y'){
                int a = kill.size();
                int b = wpn.size();
                int c = rm.size();
                int d = guilty.size();
                print(susp, a, b, c, d);
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

int setLoc(char ch, int &vPos, string cha[]){
    switch(ch){ //Setting character
            case 0:{
                cout<<"You are "<<cha[0]<<endl;
                vPos = 17;
                return 23;
            }
            case 1:{
                cout<<"You are "<<cha[1]<<endl;
                vPos = 24;
                return 16;
            }
            case 2:{ 
                cout<<"You are "<<cha[2]<<endl;
                vPos = 19;
                return 0;
            }
            case 3:{ 
                cout<<"You are "<<cha[3]<<endl;
                vPos = 0;
                return 9;
            }
            case 4:{
                cout<<"You are "<<cha[4]<<endl;
                vPos = 0;
                return 14;
            }
            case 5:{
                cout<<"You are "<<cha[5]<<endl;
                vPos = 6;
                return 0;
            }
        }
    exit(1);
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

void print(string inp[], int size){
    for(int i = 0; i < size; i++)
        cout<<i<<" - "<<setw(15)<<inp[i]<<endl;
}

void print(string inp[][4], int a, int b, int c, int d){
    cout<<"Suspect   - ";
    for(int i = 0; i < a; i++)
        cout<<inp[i][0]<<", ";
    cout<<endl<<"Weapon    - ";
    for(int i = 0; i < b; i++)
        cout<<inp[i][1]<<", ";
    cout<<endl<<"Room      - ";
    for(int i = 0; i < c; i++)
        cout<<inp[i][2]<<", ";
    cout<<endl<<"Confirmed - ";
    for(int i = 0; i < d; i++)
        cout<<inp[i][3]<<",";
    cout<<endl;
}

void setCha(string cha[]){
    cha[0] = "Colonel Mustard";
    cha[1] = "Miss Scarlet";
    cha[2] = "Professor Plum";
    cha[3] = "Mr. Green";
    cha[4] = "Mrs. White";
    cha[5] = "Mrs. Peacock";
}

void setWpon(string wpon[]){
    wpon[0] = "Rope";
    wpon[1] = "Lead Pipe";
    wpon[2] = "Knife";
    wpon[3] = "Wrench";
    wpon[4] = "Candlestick";
    wpon[5] = "Revolver";
}

void setRoom(string room[]){
    room[0] = "Conservatory";
    room[1] = "Billiard Room";
    room[2] = "Library";
    room[3] = "Study";
    room[4] = "Ballroom";
    room[5] = "Hall";
    room[6] = "Kitchen";
    room[7] = "Dining Room";
    room[8] = "Lounge";
}
void suspect(vector<string> cha, vector<string> wpon, vector<string> room, vector<string> guilt, string spect[][4]){
    for(int i = 0; i < cha.size(); i++)
        spect[i][0] = cha[i];
    for(int i = 0; i < wpon.size(); i++)
        spect[i][1] = wpon[i];
    for(int i = 0; i < room.size(); i++)
        spect[i][2] = room[i];
    for(int i = 0; i < guilt.size(); i++)
        spect[i][3] = guilt[i];
}

void readIn(fstream &in, string &spect){
    string lEnd = "*/";
    //Display user suspect list
    while(in>>spect){
        if(spect == lEnd)
            cout<<endl;
        else
    cout<<spect<<" ";
    }
}

void readTo(fstream &out, string cha, string wpon, string room){
    out<<"Suspect - "<<cha<<" /"<<endl;
    out<<"Weapon - "<<wpon<<" /"<<endl;
    out<<"Room - "<<room<<" /"<<endl;
}
