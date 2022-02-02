/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 27, 2022, 8:17 AM
 * Purpose: Clue V1
 */

//System Level Libraries

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
    
    //Declare Variables
    string char1, char2, char3, char4, char5, char6;             //Strings for all the playable characters
    string wpon1, wpon2, wpon3, wpon4, wpon5, wpon6;             //Strings for all of the weapons
    string room1, room2, room3, room4,room5,                     //Strings for all of the rooms
           room6, room7, room8, room9; 
    string killer, wpon, room;                                   //Strings for the killer, the weapon used, and room used
         
    int choice, psion, dice;              
    char ch;
    
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
    
    //Display the outputs
    
    //Exit the program

    return 0;
}


