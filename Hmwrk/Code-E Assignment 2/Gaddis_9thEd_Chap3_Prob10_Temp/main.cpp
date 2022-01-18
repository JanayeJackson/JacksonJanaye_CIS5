/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 16, 2022, 8:35 PM
 * Purpose:  Hmwk 2
 *           Converting Farenheit to Celsius
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float F;           //Fahrenheit 
    float C;           //Celsius
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>F;
    
    //Map inputs -> outputs
    C=(5.0/9)*(F-32);
    
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint<<F<<" Degrees Fahrenheit = "<<C<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}