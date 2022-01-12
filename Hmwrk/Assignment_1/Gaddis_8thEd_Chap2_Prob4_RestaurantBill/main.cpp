/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 9, 2022, 8:32 PM
 * Purpose: Hmwk 1
 *          Calculating the total cost 
 *          of a restaurant bill
 */

//System Level Libraries

#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float mCost,        //Cost of meal
          tax,          //Tax percent
          tip;          //Tip percent
    float aTax,         //Tax total 
          aTip,         //Tip total 
          bill;         //Bill total
    
    //Initialize Variables
    mCost=88.67f;
    tax=0.0675f;
    tip=0.20f;
    
    //Map the inputs/known to the outputs
    aTax=mCost*tax;
    aTip=tip*(aTax+mCost);
    bill=aTip+aTax+mCost;
    
    //Display the outputs
    cout<<"Restaurant Bill"<<endl;
    cout<<"Cost of meal : $"<<mCost<<endl;
    cout<<"Tax amount   : $"<<aTax<<endl;
    cout<<"Tip amount   : $"<<aTip<<endl;
    cout<<"Total        : $"<<bill<<endl;
    
    //Exit the program

    return 0;
}

