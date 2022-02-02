/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 24, 2022, 11:30 AM
 * Purpose:  Adding all integers from 1 to a
 *           specified number
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
    unsigned short num,    //Number from user input
                   sum,    //Sum of all numbers up until num
                   count;  //Counter 
    //Initialize or input i.e. set variable value
    sum = 0;
    cin>>num;
    
    //Map inputs -> outputs
    for(count = 1; count<=num; count++)
        sum+=count;
    
    //Display the outputs
    cout<<"Sum = "<<sum;

    //Exit stage right or left!
    return 0;
}
