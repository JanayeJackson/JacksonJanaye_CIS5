/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 24, 2022, 1:50 PM
 * Purpose:  Creating shapes
 *
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
    int num,             //User input
        i,               //counter
        n;               ///counter
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(i = 1; i <= num; i++)
    {
        for(int n = 1; n <= i; n++)
            cout<<"+";
        cout<<endl;
        cout<<endl;
    }
    for(i = num; i >= 1; i--)
    {
        for(n = i; n >= 1; n--)
            cout<<"+";
        if(i>1)
        {
            cout<<endl;
            cout<<endl;
        }
    }

    //Exit stage right or left!
    return 0;
}