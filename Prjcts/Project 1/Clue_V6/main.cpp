/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on February 2, 2022, 6:11 PM
 * Purpose: Clue V6
 */

//System Level Libraries

#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time to set random seed
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
    
    //Declare Variables
    //Strings
    string char1, char2, char3, char4, char5, char6;             //Strings for all the playable characters
    string wpon1, wpon2, wpon3, wpon4, wpon5, wpon6;             //Strings for all of the weapons
    string room1, room2, room3, room4,room5,                     //Strings for all of the rooms
           room6, room7, room8, room9; 
    string killer, wpon, room;                                   //Strings for the killer, the weapon used, and room used
    string pRoom;                                                //Room player is in 
    
    //Integers
    int choice;                                                  //Choice for user player
    int dice, space;                                              //Dice and player movement
    int slct1, slct2, slct3;                                     //Integers for case file picks
    int ac1, ac2, ac3, sus;                                      //Integers for user accusations or suspects
    
    //Floats
    float vPos, hPos;                                            //Floats for player position
    
    //Chars
    char ch;
    
    //Booleans
    bool win, inRoom, move;
    
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
    
    //Player selection
    do{
        //List of players
        cout<<"Players List"<<endl;
        cout<<"1 - "<<char1<<endl;
        cout<<"2 - "<<char2<<endl;
        cout<<"3 - "<<char3<<endl;
        cout<<"4 - "<<char4<<endl;
        cout<<"5 - "<<char5<<endl;
        cout<<"6 - "<<char6<<endl;
        cout<<"Which player would you like to play as?"<<endl;     //User choice
        cin>>choice;
    
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
    }while(choice == 'n' or choice == 'N');
    
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
    
    //Game play
    do{
        //Player choice
        cout<<"You are at v-"<<vPos<<" h-"<<hPos<<endl;
        cout<<"Would you like to make an accusation? (y or n)"<<endl;
        cin>>ch;
        
        //Provide accusation choices
        if(ch == 'y' || ch == 'Y'){
            //List players to choose from
            cout<<"Players List"<<endl;
            cout<<"1 - "<<char1<<endl;
            cout<<"2 - "<<char2<<endl;
            cout<<"3 - "<<char3<<endl;
            cout<<"4 - "<<char4<<endl;
            cout<<"5 - "<<char5<<endl;
            cout<<"6 - "<<char6<<endl;
            
            //List weapons to choose from
            cout<<"Weapons List"<<endl;
            cout<<"1 - "<<wpon1<<endl;
            cout<<"2 - "<<wpon2<<endl;
            cout<<"3 - "<<wpon3<<endl;
            cout<<"4 - "<<wpon4<<endl;
            cout<<"5 - "<<wpon5<<endl;
            cout<<"6 - "<<wpon6<<endl;
            
            //List rooms to choose from
            cout<<"Rooms List"<<endl;
            cout<<"1 - "<<room1<<endl;
            cout<<"2 - "<<room2<<endl;
            cout<<"3 - "<<room3<<endl;
            cout<<"4 - "<<room4<<endl;
            cout<<"5 - "<<room5<<endl;
            cout<<"6 - "<<room6<<endl;
            cout<<"7 - "<<room7<<endl;
            cout<<"8 - "<<room8<<endl;
            cout<<"9 - "<<room9<<endl;
            
            //User accusation 
            cout<<"Choose a person, a weapon, and a room - (Ex. 1 1 1 would pick "<<char1<<" & "<<wpon1<<" & "<<room1<<endl;
            cin>>ac1>>ac2>>ac3;
            if(ac1 == slct1 && ac2 == slct2 && ac3 == slct3)
            {
                win = true;    //if all accusations are true player wins
            }
            else{
                cout<<"Your accusation is incorrect"<<endl;
            }
        }
        //Else continue game
        else{
            //Dice rolling
            cout<<"Rolling Dice..."<<endl;
            dice = rand()%12+1;
            cout<<"You rolled a "<<dice<<endl;
            
            //Set boolean
            move = true;
            
            //Set integer
            space = 0;
            
            //User movement
            while(space < dice){
                cout<<"Your position is v-"<<vPos<<", h-"<<hPos<<endl;
                cout<<"You have "<<dice-space<<" spaces left to move."<<endl;
                cout<<"Would you like to move up, down, left, right, or not at all? (u, d, l, r, n)"<<endl;
                cin>>ch;
                if(ch == 'u' || ch == 'U'){       //Moving up
                    vPos++;
                    if(vPos > 24){
                        cout<<"You cannot move that way"<<endl;
                        vPos--;
                        space--;
                    } 
                }
                else if(ch == 'd' || ch == 'D'){  //Moving down
                    vPos--;
                    if(vPos < 0){
                        cout<<"You cannot move that way"<<endl;
                        vPos++;
                        space--;
                    }      
                }
                else if(ch == 'l' || ch == 'L'){  //Moving to the left
                    hPos--;
                    if(hPos < 0){
                        cout<<"You cannot move that way"<<endl;
                        hPos++;
                        space--;
                    }       
                }
                else if(ch == 'r' || ch == 'R'){  //Moving to the right
                    hPos++;
                    if(hPos > 23){
                        cout<<"You cannot move that way"<<endl;
                        hPos--;
                        space--;
                    }      
                }
                else if(ch == 'n' || ch == 'N'){  //Not moving
                    space = dice;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                    space--;
                }
                space++;
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
                
            
            if(inRoom == true){ //Player is in room
                cout<<"You are in "<<pRoom<<endl;
                //Does user know who, what, and where?
                cout<<"Would you like to make an accusation?(y or n)"<<endl;
                cin>>ch;
                if(ch == 'y' || ch == 'Y')//Provide Accusation choices 
                {
                    //List players to choose from
                    cout<<"Players List"<<endl;
                    cout<<"1 - "<<char1<<endl;
                    cout<<"2 - "<<char2<<endl;
                    cout<<"3 - "<<char3<<endl;
                    cout<<"4 - "<<char4<<endl;
                    cout<<"5 - "<<char5<<endl;
                    cout<<"6 - "<<char6<<endl;
            
                    //List weapons to choose from
                    cout<<"Weapons List"<<endl;
                    cout<<"1 - "<<wpon1<<endl;
                    cout<<"2 - "<<wpon2<<endl;
                    cout<<"3 - "<<wpon3<<endl;
                    cout<<"4 - "<<wpon4<<endl;
                    cout<<"5 - "<<wpon5<<endl;
                    cout<<"6 - "<<wpon6<<endl;
                    
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
                        cout<<"Players List"<<endl;
                        cout<<"1 - "<<char1<<endl;
                        cout<<"2 - "<<char2<<endl;
                        cout<<"3 - "<<char3<<endl;
                        cout<<"4 - "<<char4<<endl;
                        cout<<"5 - "<<char5<<endl;
                        cout<<"6 - "<<char6<<endl;
            
                        //List weapons to choose from
                        cout<<"Weapons List"<<endl;
                        cout<<"7 - "<<wpon1<<endl;
                        cout<<"8 - "<<wpon2<<endl;
                        cout<<"9 - "<<wpon3<<endl;
                        cout<<"10 - "<<wpon4<<endl;
                        cout<<"11 - "<<wpon5<<endl;
                        cout<<"12 - "<<wpon6<<endl;
            
                        //List rooms to choose from
                        cout<<"Rooms List"<<endl;
                        cout<<"13 - "<<room1<<endl;
                        cout<<"14 - "<<room2<<endl;
                        cout<<"15 - "<<room3<<endl;
                        cout<<"16 - "<<room4<<endl;
                        cout<<"17 - "<<room5<<endl;
                        cout<<"18 - "<<room6<<endl;
                        cout<<"19 - "<<room7<<endl;
                        cout<<"20 - "<<room8<<endl;
                        cout<<"21 - "<<room9<<endl;
                        cout<<"Choose who or what you suspect - (Ex. 1 would pick "<<char1<<")"<<endl;
                        cin>>choice;
                    }
                        
                        //Determine is user suspicion correct
                        if(choice <=6){  //Character suspect
                            if(choice != slct1)
                                cout<<"This is not a suspect. A user has this character."<<endl;
                            else
                                cout<<"No user has this character. This is a suspect."<<endl;
                        }
                        else if(choice >6 && choice <=12){ //Weapon suspect
                            if(choice - 6 != slct2)
                                cout<<"This is not the weapon used. A user has this weapon."<<endl;
                            else
                                cout<<"No user has this weapon. This is a weapon used."<<endl;
                        }
                        else if(choice >12 && choice <=21){ //Room suspect
                            if(choice - 12 != slct3)
                                cout<<"This is not where the murder happened. A user has this room."<<endl;
                            else
                                cout<<"No user has this room. This is where the murder happened."<<endl;
                        }
                }         
            }
            else
            {
                cout<<"You are not in any room"<<endl;                 //User is not in a room
            } 
        }
    }while(win == false); //Continue until player wins
    
    //Display outputs
    cout<<"You won!"<<endl;
    cout<<"The killer was "<<killer<<" the weapon was "<<wpon<<" and it happened in the "<<room<<" room."<<endl;
            
    //Exit the program
    return 0;
}
