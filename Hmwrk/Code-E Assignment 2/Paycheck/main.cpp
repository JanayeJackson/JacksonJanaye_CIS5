/* 
 * File:   main.cpp
 * Author: Janaye Jacksob
 * Created on January 17, 2022, 11:14 AM
 * Purpose:  Hmwk 2
 *           Calculating paycheck base on hours worked
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
    int pRate,         //Pay rate in dollars per hour 
        hours;         //Hours worked
    float pCheck;       //Paycheck in dollars per hour
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>pRate>>hours;
    
    //Map inputs -> outputs
    pCheck=hours*pRate;
    pCheck+=hours>40?
          (hours-40)*pRate:0;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<pCheck;

    //Exit stage right or left!
    return 0;
}