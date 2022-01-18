/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 16, 2022, 4:29 PM
 * Purpose: hmwk 2  
 *          Calculating the average of 5 test scores
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Libray
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float scre1,         //Score number 1
        scre2,           //Score number 2
        scre3,           //Score number 3
        scre4,           //Score number 4 
        scre5;           //Score number 5
    float avg;           //Average of scores
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>scre1;         //User input for score 1
    cin>>scre2;         //User input for score 2
    cin>>scre3;         //User input for score 3
    cin>>scre4;         //User input for score 4
    cin>>scre5;         //User input for score 5
     
    //Map inputs -> outputs
    avg = (scre1 + scre2 + scre3 + scre4+ scre5)/5;
    
    //Display the outputs
    
    cout<<"The average = "<<fixed<<setprecision(1)<<showpoint<<avg;

    //Exit stage right or left!
    return 0;
}
