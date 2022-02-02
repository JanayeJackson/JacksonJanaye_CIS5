/* 
 * File:   main.cpp
 * Author: Janaye Jackosn
 * Created on January 24, 2022, 1:15 PM
 * Purpose:  Creating rectangle based on character 
 *           input
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
    int num;              //length and width of rectangle
    char cha;             //User input for character
    
    //Initialize or input i.e. set variable values
    cin>>num>>cha;

    
    //Map inputs -> outputs

    
    //Display the outputs
    for(int i=1; i<=num; i++)
    {
        for(int n=1; n<=num; n++)
            cout<<cha;
        if(i<num)
            cout<<endl;
    }


    //Exit stage right or left!
    return 0;
}