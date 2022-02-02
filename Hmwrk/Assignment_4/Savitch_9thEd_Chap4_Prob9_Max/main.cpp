/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 24, 2022, 7:23 PM
 * Purpose:  Finding max values
 *
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float max(float, float);           //returns max number out of two numbers 
float max(float, float, float);    //returns max number out of three numbers

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,          //first number
          num2,          //second number
          num3;          //third number
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:\n"<<endl;
    cin>>num1;
    cout<<"Enter Second number:\n"<<endl;
    cin>>num2;
    cout<<"Enter third number:\n"<<endl;
    cin>>num3;
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Largest number from two parameter function:\n"<<max(num1,num2)<<endl;
    cout<<"\nLargest number from three parameter function:\n"<<max(num1,num2,num3)<<endl;

    //Exit stage right or left!
    return 0;
}

float max(float one, float two)
{
    if(one>two)
        return one;
    else
        return two;
}

float max(float one, float two, float three)
{
    if(one>two && one>three)
        return one;
    else if(two>one && two>three)
        return two;
    else
        return three;
}