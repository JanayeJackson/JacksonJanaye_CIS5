/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 11, 2022, 7:00 PM
 * Purpose: Hmwk 1
 *          Calculating stock commissions
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
    int stck;           //Amount of stock shares
    float pShr,        //Price of stock shares
            cmsn;       //Commission percentage
    float pStck,       //Total price of stock 
            aCmsn,      //Commission price
            total;      //Total of stock price and commission
    
    //Initialize Variables
    stck=750;
    pShr=35.00f;
    cmsn=0.02f;
    
    //Map the inputs/known to the outputs
    pStck=stck*pShr;
    aCmsn=cmsn*pStck;
    total=aCmsn+pStck;
    
    //Display the outputs
    cout<<"Stock Commission"<<endl;
    cout<<"Amount paid for stock     : $"<<pStck<<endl;
    cout<<"Amount paid in commission : $"<<aCmsn<<endl;
    cout<<"Amount paid in total      : $"<<total<<endl;
    
    //Exit the program

    return 0;
}

