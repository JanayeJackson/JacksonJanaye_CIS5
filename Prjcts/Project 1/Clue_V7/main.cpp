/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on February 3, 2022, 12:17 PM
 * Purpose: Clue V7
 */

//System Level Libraries

#include <cmath>     //Math Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time to set random seed
#include <fstream>   //FileLibrary
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Local Constants
    const string file = "SuspectList.txt";                       //String for file names
    const string lEnd = ".*";                                    //String for new line in input
    
    //Strings
    string char1, char2, char3, char4, char5, char6;             //Strings for all the playable characters
    string wpon1, wpon2, wpon3, wpon4, wpon5, wpon6;             //Strings for all of the weapons
    string room1, room2, room3, room4,room5,                     //Strings for all of the rooms
           room6, room7, room8, room9; 
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
    char1 = "Colonel Mustard";
    char2 = "Miss Scarlet";
    char3 = "Professor Plum";
    char4 = "Mr. Green";
    char5 = "Mrs. White";
    char6 = "Mrs. Peacock";
    
    //Set strings to name of weapons
    wpon1 = "Rope";
    wpon2 = "Lead Pipe";
    wpon3 = "Knife";
    wpon4 = "Wrench";
    wpon5 = "Candlestick";
    wpon6 = "Revolver";
    
    //Set strings to name of rooms
    room1 = "Conservatory";
    room2 = "Billiard Room";
    room3 = "Library";
    room4 = "Study";
    room5 = "Ballroom";
    room6 = "Hall";
    room7 = "Kitchen";
    room8 = "Dining Room";
    room9 = "Lounge";
    
    //Initialize boolean
    win = false;
    
    //fstream
    fstream out;
    fstream input;
    
    //Player selection
    do{
        //List of players
        cout<<"   Players List"<<endl;
        cout<<"1 - "<<setw(15)<<char1<<endl;
        cout<<"2 - "<<setw(15)<<char2<<endl;
        cout<<"3 - "<<setw(15)<<char3<<endl;
        cout<<"4 - "<<setw(15)<<char4<<endl;
        cout<<"5 - "<<setw(15)<<char5<<endl;
        cout<<"6 - "<<setw(15)<<char6<<endl;
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
                cout<<"You are "<<char1<<endl;
                vPos = 17;
                hPos = 23;
                break;
            }
            case 2:{
                cout<<"You are "<<char2<<endl;
                vPos = 24;
                hPos = 16;
                break;
            }
            case 3:{ 
                cout<<"You are "<<char3<<endl;
                vPos = 19;
                hPos = 0;
                break;
            }
            case 4:{ 
                cout<<"You are "<<char4<<endl;
                vPos = 0;
                hPos = 9;
                break;
            }
            case 5:{
                cout<<"You are "<<char5<<endl;
                vPos = 0;
                hPos = 14;
                break;
            }
            case 6:{
                cout<<"You are "<<char6<<endl;
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
    slct1 = rand()%6+1; 
    switch(slct1){  //Killer picker
        case 1: killer = char1;break;
        case 2: killer = char2;break;
        case 3: killer = char3;break;
        case 4: killer = char4;break;
        case 5: killer = char5;break;
        case 6: killer = char6;break;
    }
    
    slct2 = rand()%6+1;
    switch(slct2){   //Weapon picker
        case 1: wpon = wpon1;break;
        case 2: wpon = wpon2;break;
        case 3: wpon = wpon3;break;
        case 4: wpon = wpon4;break;
        case 5: wpon = wpon5;break;
        case 6: wpon = wpon6;break;
    }
    
    slct3 = rand()%9+1;
    switch(slct3){   //Room picker
        case 1: room = room1;break;
        case 2: room = room2;break;
        case 3: room = room3;break;
        case 4: room = room4;break;
        case 5: room = room5;break;
        case 6: room = room6;break;
        case 7: room = room7;break;
        case 8: room = room8;break;
        case 9: room = room9;break;
    }
    
    //Open file to place suspect
    out.open(file, ios:: out);
    
    //Game play
    do{
        //output player location
        cout<<"\nYou are at v-"<<vPos<<" h-"<<hPos<<endl;
        
        //Output room locations
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
        
        //Player choice
        cout<<"Would you like to make an accusation? (y or n)"<<endl;
        cin>>ch;
        
        //Provide accusation choices
        if(ch == 'y' || ch == 'Y'){
            //List players to choose from
            cout<<"\n   Players List"<<endl;
            cout<<"1 - "<<setw(15)<<char1<<endl;
            cout<<"2 - "<<setw(15)<<char2<<endl;
            cout<<"3 - "<<setw(15)<<char3<<endl;
            cout<<"4 - "<<setw(15)<<char4<<endl;
            cout<<"5 - "<<setw(15)<<char5<<endl;
            cout<<"6 - "<<setw(15)<<char6<<endl;
            
            //List weapons to choose from
            cout<<"\n   Weapons List"<<endl;
            cout<<"1 - "<<setw(15)<<wpon1<<endl;
            cout<<"2 - "<<setw(15)<<wpon2<<endl;
            cout<<"3 - "<<setw(15)<<wpon3<<endl;
            cout<<"4 - "<<setw(15)<<wpon4<<endl;
            cout<<"5 - "<<setw(15)<<wpon5<<endl;
            cout<<"6 - "<<setw(15)<<wpon6<<endl;
            
            //List rooms to choose from
            cout<<"\n     Rooms List"<<endl;
            cout<<"1 - "<<setw(15)<<room1<<endl;
            cout<<"2 - "<<setw(15)<<room2<<endl;
            cout<<"3 - "<<setw(15)<<room3<<endl;
            cout<<"4 - "<<setw(15)<<room4<<endl;
            cout<<"5 - "<<setw(15)<<room5<<endl;
            cout<<"6 - "<<setw(15)<<room6<<endl;
            cout<<"7 - "<<setw(15)<<room7<<endl;
            cout<<"8 - "<<setw(15)<<room8<<endl;
            cout<<"9 - "<<setw(15)<<room9<<endl;
            
            //User accusation 
            cout<<"Choose a person, a weapon, and a room - (Ex. 1 1 1 would pick "<<char1<<" & "<<wpon1<<" & "<<room1<<")"<<endl;
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
            if((vPos>=0 && vPos<=5) && (hPos>=0 && hPos<=5)){         //Conservatory
                inRoom = true;
                pRoom = room1;
            }
            else if((vPos>= 8 && vPos<=12) && (hPos>=0 && hPos<=5)){  //Billiard Room
                inRoom = true;
                pRoom = room2;
            }
            else if((vPos>=14 && vPos<=18)&& (hPos>=0 && hPos<=6)){   //Library 
                inRoom = true;
                pRoom = room3;
            }
            else if((vPos>=21 && vPos<=24) && (hPos>=0 && hPos<=6)){  //Study
                inRoom = true;
                pRoom = room4;
            }
            else if((vPos>=0 && vPos<=7) && (hPos>=8 && hPos<=15)){   //Ballroom
                inRoom = true;
                pRoom = room5;
            }
            else if((vPos>=18 && vPos<=24) && (hPos>=9 && hPos<=14)){ //Hall
                inRoom = true;
                pRoom = room6;
            }
            else if((vPos>=0 && vPos<= 6) && (hPos>=18 && hPos<=23)){ //Kitchen
                inRoom = true;
                pRoom = room7;
            }
            else if((vPos>=9 && vPos<=15) && (hPos>=16 && hPos<=23)){ //Dining Room
                inRoom = true;
                pRoom = room8;
            }
            else if((vPos>=19 && vPos<=24) && (hPos>=17 && hPos<=23)){ //Lounge
                inRoom = true;
                pRoom = room9;
            }
            else{
                inRoom = false;
            }
            
            //Initialize hint
            hint = sqrt(pow(vPos, 3));
            
            //Giving player semi-random hint
            if(static_cast<int>(hint) == 70){
                cout<<"You have received a hint:"<<endl;
                //Initialize hint
                pick = (dice + 1) / 2;
                
                //Pick hint to give
                if(slct1 == pick){
                    pick++;
                }
                switch(pick){
                    case 1: spect = char1;break;
                    case 2: spect = char2;break;
                    case 3: spect = char3;break;
                    case 4: spect = char4;break;
                    case 5: spect = char5;break;
                    case 6: spect = char6;break;
                }
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
                    cout<<"1 - "<<setw(15)<<char1<<endl;
                    cout<<"2 - "<<setw(15)<<char2<<endl;
                    cout<<"3 - "<<setw(15)<<char3<<endl;
                    cout<<"4 - "<<setw(15)<<char4<<endl;
                    cout<<"5 - "<<setw(15)<<char5<<endl;
                    cout<<"6 - "<<setw(15)<<char6<<endl;
            
                    //List weapons to choose from
                    cout<<"\n   Weapons List"<<endl;
                    cout<<"1 - "<<setw(15)<<wpon1<<endl;
                    cout<<"2 - "<<setw(15)<<wpon2<<endl;
                    cout<<"3 - "<<setw(15)<<wpon3<<endl;
                    cout<<"4 - "<<setw(15)<<wpon4<<endl;
                    cout<<"5 - "<<setw(15)<<wpon5<<endl;
                    cout<<"6 - "<<setw(15)<<wpon6<<endl;
                    
                    //User accusation
                    cout<<"Choose a person and a weapon - (Ex. 1 1 would pick "<<char1<<" & "<<wpon1<<")"<<endl;
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
                        cout<<"1 - "<<setw(15)<<char1<<endl;
                        cout<<"2 - "<<setw(15)<<char2<<endl;
                        cout<<"3 - "<<setw(15)<<char3<<endl;
                        cout<<"4 - "<<setw(15)<<char4<<endl;
                        cout<<"5 - "<<setw(15)<<char5<<endl;
                        cout<<"6 - "<<setw(15)<<char6<<endl;
            
                        //List weapons to choose from
                        cout<<"\n   Weapons List"<<endl;
                        cout<<"7 - "<<setw(15)<<wpon1<<endl;
                        cout<<"8 - "<<setw(15)<<wpon2<<endl;
                        cout<<"9 - "<<setw(15)<<wpon3<<endl;
                        cout<<"10 - "<<setw(15)<<wpon4<<endl;
                        cout<<"11 - "<<setw(15)<<wpon5<<endl;
                        cout<<"12 - "<<setw(15)<<wpon6<<endl;
            
                        //List rooms to choose from
                        cout<<"\n     Rooms List"<<endl;
                        cout<<"13 - "<<setw(15)<<room1<<endl;
                        cout<<"14 - "<<setw(15)<<room2<<endl;
                        cout<<"15 - "<<setw(15)<<room3<<endl;
                        cout<<"16 - "<<setw(15)<<room4<<endl;
                        cout<<"17 - "<<setw(15)<<room5<<endl;
                        cout<<"18 - "<<setw(15)<<room6<<endl;
                        cout<<"19 - "<<setw(15)<<room7<<endl;
                        cout<<"20 - "<<setw(15)<<room8<<endl;
                        cout<<"21 - "<<setw(15)<<room9<<endl;
                        cout<<"Choose who or what you suspect - (Ex. 1 would pick "<<char1<<")"<<endl;
                        cin>>choice;
                    }
                        
                        //Determine is user suspicion correct
                        if(choice <=6){  //Character suspect
                            if(choice != slct1){
                                cout<<"This is not a suspect. A user has this character."<<endl;
                                //Pick suspect to print to file
                                switch(choice){
                                    case 1: spect = char1;break;
                                    case 2: spect = char2;break;
                                    case 3: spect = char3;break;
                                    case 4: spect = char4;break;
                                    case 5: spect = char5;break;
                                    case 6: spect = char6;break;   
                                }
                                //Print suspect to file
                                out<<spect<< " is not a suspect .*"<<endl;
                            }
                            else{
                                cout<<"No user has this character. This is a suspect."<<endl;
                                //Print killer to file
                                out<<killer<<" is the killer .*"<<endl;
                            }
                                
                        }
                        else if(choice >6 && choice <=12){ //Weapon suspect
                            if(choice - 6 != slct2){
                                cout<<"This is not the weapon used. A user has this weapon."<<endl;
                                //Pick suspect to print to file
                                switch(choice){
                                    case 7: spect = wpon1;break;
                                    case 8: spect = wpon2;break;
                                    case 9: spect = wpon3;break;
                                    case 10: spect = wpon4;break;
                                    case 11: spect = wpon5;break;
                                    case 12: spect = wpon6;break;                                
                                }
                                //Print suspect to file
                                out<<spect<< " is not the weapon used .*"<<endl;
                            }
                            else{
                                cout<<"No user has this weapon. This is a weapon used."<<endl;
                                //Print weapon to file
                                out<<wpon<<" is the weapon used .*"<<endl;
                            }
                        }
                        else if(choice >12 && choice <=21){ //Room suspect
                            if(choice - 12 != slct3){
                                cout<<"This is not where the murder happened. A user has this room."<<endl;
                                //Pick suspect to print to file
                                switch(choice){
                                    case 13: spect = room1;break;
                                    case 14: spect = room2;break;
                                    case 15: spect = room3;break;
                                    case 16: spect = room4;break;
                                    case 17: spect = room5;break;
                                    case 18: spect = room6;break;
                                    case 19: spect = room7;break;
                                    case 20: spect = room8;break;
                                    case 21: spect = room9;break;
                                }
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
