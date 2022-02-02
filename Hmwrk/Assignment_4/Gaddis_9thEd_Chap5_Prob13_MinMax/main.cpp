/* 
 * File:   main.cpp
 * Author: Janaye Jackosn
 * Created on January 24, 2022, 12:45 PM
 * Purpose:  Determing largest and smallest numbers
 *           in a series of numbers 
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
    int min,             //Minimum value
        max,             //Maximum value
        num;             //User number
    
    //Initialize or input i.e. set variable values
    cin>>num;
    min = num;
    max = num;
    
    //Map inputs -> outputs
    do{
        if(num < min)
            min=num;
        else if(num > max)
            max=num;
        cin>>num;
    }while(num != -99);
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;

    //Exit stage right or left!
    return 0;
}