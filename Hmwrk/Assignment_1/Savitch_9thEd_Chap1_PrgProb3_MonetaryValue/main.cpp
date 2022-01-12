/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 9, 2022, 7:50 PM
 * Purpose: Hmwk 1
 *          Calculating the monetary value 
 *          of quarters, dimes, and nickels
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
    int   aQtr,          //User input for quarters
          aDime,         //User input for dimes
          aNic;          //User input for nickels 
    float qtr,           //Value of a quarter
          dime,          //Value of a dime 
          nic;           //Value of a nickel
    float val;           //Value of coins user inputs
    
    //Initialize Variables
    qtr=0.25f;
    dime=0.10f;
    nic=0.05f;
    
    cout<<"How many Quarters? ";
    cin>>aQtr;
    cout<<"How many Dimes? ";
    cin>>aDime;
    cout<<"How many Nickels? ";
    cin>>aNic;
    //Map the inputs/known to the outputs
    val=(aQtr*qtr)+(aDime*dime)+(aNic*nic);
    
    //Display the outputs
    cout<<"\nMonetary Value of Coins"<<endl;
    cout<<"The monetary value of "<<aQtr<<" quarter(s), "<<aDime<<" dime(s), and "<<aNic<<" nickel(s) is $"<<val<<endl;
    
    //Exit the program

    return 0;
}

