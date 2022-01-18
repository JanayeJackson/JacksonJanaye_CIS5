/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 16, 2022, 8:15 PM
 * Purpose:  Hmwk 2
 *           Calculating estimated insurance 
 *           based on cost of house
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
    //Heading 
    cout<<"Insurance Calculator"<<endl;
    //Set the random number seed
    
    //Declare Variables
    float pcnt;        //Percent for minimum insurance
    float min,         //Minimum insurance cost
          cost;        //Replacement cost
    
    //Initialize or input i.e. set variable values
    pcnt=0.80f;
    cout<<"How much is your house worth?"<<endl;
    cin>>cost;
    
    //Map inputs -> outputs
    min=cost*pcnt;
    
    //Display the outputs
    cout<<"You need $"<<min<<" of insurance.";

    //Exit stage right or left!
    return 0;
}
