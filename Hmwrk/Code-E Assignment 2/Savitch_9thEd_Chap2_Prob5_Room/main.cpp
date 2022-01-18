/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 11:56 AM
 * Purpose: Hmwk 2 
 *          Calculating whether maximum occupancy has been reached
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int maxCap,         //Maximum capacity
        people;         //Amount of people attending
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap>>people;
    
    //Map inputs -> outputs
    people>maxCap?
            cout<<"Meeting cannot be held.\nReduce number of people by "<<people-maxCap<<" to avoid fire violation.":
            cout<<"Meeting can be held.\nIncrease number of people by "<<maxCap-people<<" will be allowed without violation.";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}