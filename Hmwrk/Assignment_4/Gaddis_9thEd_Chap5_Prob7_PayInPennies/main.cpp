/* 
 * File:   main.cpp
 * Author: Janaye Jackson 
 * Created on January 24, 2022, 12:15 PM
 * Purpose:  Pay based on doubling penny
 *
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <math.h>    //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int days;           //Days in pay period
    
    //Initialize or input i.e. set variable values
    cin>>days;
    if(days < 1)
        return 0;
        
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Pay = $"<<((pow(2,days)-1)/100.0);

    //Exit stage right or left!
    return 0;
}