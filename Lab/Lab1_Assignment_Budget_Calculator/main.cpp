/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 13, 2022, 4:45 PM
 * Purpose: Lab 1 Assignment
 *          Calculating percentages of military budget
 */

//System Level Libraries

#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units
const int CNVRSN=100;      //Percentage conversion 

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float fBgt,         //Federal budget
            mBgt;       //Military budget
    float pBgt;         //Military budget as percent
            
    
    //Initialize Variables
    fBgt=6.82e12f;
    mBgt=7.529e11f;
    
    //Map the inputs/known to the outputs
    pBgt=mBgt/fBgt;
    pBgt=pBgt*CNVRSN;
    //Display the outputs
    cout<<"Budget Calculator\n"<<endl;
    cout<<"The Military Budget as a percentage of the Federal Budget is "<<pBgt<<"%."<<endl;
    
    //Exit the program

    return 0;
}

