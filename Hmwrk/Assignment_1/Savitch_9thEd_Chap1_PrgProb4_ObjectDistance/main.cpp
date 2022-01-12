/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 9, 2022, 8:11 PM
 * Purpose: Hmwk 1
 *          Calculating the distance an 
 *          object will fall after a 
 *          certain amount of time
 */

//System Level Libraries

#include <iostream>  //Input-Output Library
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
    int acc;             //Acceleration
    float time;          //How long object traveled
    float dist;          //Distance object travels
    
    //Initialize Variables
    acc=32;
    
    cout<<"Enter how long the object should fall in seconds: ";
    cin>>time;
    
    //Map the inputs/known to the outputs
    dist=acc*time*time;
    dist=dist/2;
    
    //Display the outputs
    cout<<"How Far an Object Will Fall Based on Time"<<endl;
    cout<<"If an object falls for "<<time<<"s in freefall"<<endl;
    cout<<"it will travel "<<dist<<" feet."<<endl;
    
    
    //Exit the program

    return 0;
}

