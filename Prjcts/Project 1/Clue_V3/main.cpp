/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 30, 2022, 4:08 PM
 * Purpose: Clue V3
 */

//System Level Libraries

#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random number Library
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
    string char1, char2, char3, char4, char5, char6;       //Strings for all the playable characters
    string wpon1, wpon2, wpon3, wpon4, wpon5, wpon6;             //Strings for all of the weapons
    string room1, room2, room3, room4,room5,                     //Strings for all of the rooms
           room6, room7, room8, room9; 
    string killer, wpon, room;                                   //Strings for the killer, the weapon used, and room used
    string pRoom;                                                //Room player is in     
    int choice, vPos, hPos, dice, slct1, slct2, slct3, vMove, hMove, ac1, ac2, ac3;              
    char ch;
    bool win, inRoom;
    
    //Initialize Variables
    char1 = "Colonel Mustard";
    char2 = "Miss Scarlet";
    char3 = "Professor Plum";
    char4 = "Mr. Green";
    char5 = "Mrs. White";
    char6 = "Mrs. Peacock";
    
    wpon1 = "Rope";
    wpon2 = "Lead Pipe";
    wpon3 = "Knife";
    wpon4 = "Wrench";
    wpon5 = "Candlestick";
    wpon6 = "Revolver";
    
    room1 = "Billiard Room";
    room2 = "Study";
    room3 = "Hall";
    room4 = "Lounge";
    room5 = "Dining Room";
    room6 = "Ballroom";
    room7 = "Conservatory";
    room8 = "Library";
    room9 = "Kitchen";
    
    win = false;
    //Player selection
    do{
        cout<<"Players List"<<endl;
        cout<<"1 - Colonel Mustard"<<endl;
        cout<<"2 - Miss Scarlet"<<endl;
        cout<<"3 - Professor Plum"<<endl;
        cout<<"4 - Mr. Green"<<endl;
        cout<<"5 - Mrs. White"<<endl;
        cout<<"6 - Mrs. Peacock"<<endl;
        cout<<"Which player would you like to play as?"<<endl;
        cin>>choice;
    
        if(choice < 1 || choice > 6) //Input Validation 
        {
            cout<<"Not a Valid Option";
                   exit(1);
        }   
    
        switch(choice){
            case 1: cout<<"You are "<<char1<<endl;break;
            case 2: cout<<"You are "<<char2<<endl;break;
            case 3: cout<<"You are "<<char3<<endl;break;
            case 4: cout<<"You are "<<char4<<endl;break;
            case 5: cout<<"You are "<<char5<<endl;break;
            case 6: cout<<"You are "<<char6<<endl;break;
        }
        cout<<"Is this the character you want? (y or n)"<<endl;
        cin>>ch;
    }while(choice == 'n' or choice == 'N');
    
    //Case File - Who, with what, where
    slct1 = rand()%6+1;
    switch(slct1){
        case 1: killer = char1;break;
        case 2: killer = char2;break;
        case 3: killer = char3;break;
        case 4: killer = char4;break;
        case 5: killer = char5;break;
        case 6: killer = char6;break;
    }
    
    slct2 = rand()%6+1;
    switch(slct2){
        case 1: wpon = wpon1;break;
        case 2: wpon = wpon2;break;
        case 3: wpon = wpon3;break;
        case 4: wpon = wpon4;break;
        case 5: wpon = wpon5;break;
        case 6: wpon = wpon6;break;
    }
    
    slct3 = rand()%9+1;
    switch(slct3){
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
        cout<<killer<<wpon<<room;
        cout<<"Would you like to make an accusation? (y or n)"<<endl;
        cin>>ch;
        
        //Provide accusation choices
        if(ch == 'y' || ch == 'Y'){
            cout<<"Choose a person and a weapon - (Ex. 1 1 1 would pick "<<char1<<" & "<<wpon1<<endl;
            cin>>ac1>>ac2>>ac3;
            if(ac1 == slct1 && ac2 == slct2 && ac3 == slct3)
            {
                win = true;
            }
            
        }
        //Else continue game
        else{
            cout<<"Rolling Dice..."<<endl;
            dice = rand()%12+1;
            cout<<"You rolled a "<<dice<<endl;
            cout<<"How would you like to move? (Vertical first then Horizontal"<<endl;
            cin>>vMove>>hMove;
        
            vPos += vMove;
            hPos += hMove;
            pRoom = room;
            if(vPos == 0 && hPos== 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else if(vPos == 0 && hPos == 0){
                inRoom = true;
            
            }
            else
            {
                cout<<"You are not in any room"<<endl;
            }   
       
            if(inRoom == true){
                cout<<"You are in "<<pRoom<<endl;
                cout<<"Would you like to make an accusation?(y or n)"<<endl;
                cin>>ch;
                if(ch == 'y' || ch == 'Y')//Provide Accusation choices 
                {
                    cout<<"Choose a person and a weapon - (Ex. 1 1 1 would pick "<<char1<<" & "<<wpon1<<endl;
                    cin>>ac1>>ac2;
                    if(ac1 == slct1 && ac2 == slct2 && pRoom == room)
                    {
                         win = true;
                    }
                }
            }
        }
    }while(win == false);
    
    //Display outputs
    cout<<"You won!"<<endl;
    cout<<"The killer was "<<killer<<" the weapon was "<<wpon<<" and it happened in the "<<room<<" room."<<endl;
            
    //Exit the program
    

    return 0;
}


