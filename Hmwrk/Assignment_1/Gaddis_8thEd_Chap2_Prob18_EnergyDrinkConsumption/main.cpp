/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 12, 2022, 12:30 PM
 * Purpose: Hmwk 1
 *          Calculating energy drink 
 *          consumption based on survey
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
    int sSize;          //Survey size
    float pDrnk,        //percent of energy Drink buyers
            pFvr;       //percent of customers that prefer Citrus-flavored 
    float eDrnk,        //Energy drink buyers
            eFvr;       //Citrus flavor buyers
    //Initialize Variables
    sSize=16500;
    pDrnk=0.15f;
    pFvr=0.58f;
            
    //Map the inputs/known to the outputs
    eDrnk=sSize*pDrnk;
    eFvr=eDrnk*pFvr;
    
    //Display the outputs
    cout<<"Energy Drink Consumption"<<endl;
    cout<<eDrnk<<" customers purchase one or more energy drinks a week."<<endl;
    cout<<eFvr<<" customers prefer citrus-flavored energy drinks."<<endl;
    
    
    //Exit the program

    return 0;
}

