/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 11, 2022, 6:12 PM
 * Purpose: Hmwk 1
 *          Calculating price of Circuit Board
 *          to include profit
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
    float pPft,         //Percentage of profit
            cBrd;       //Circuit Board Cost
    float sPce;         //Selling price of Circuit Board
    
    //Initialize Variables
    pPft=0.35f;
    cBrd=14.95f;
    
    //Map the inputs/known to the outputs
    sPce=cBrd/(1-pPft);
    
    //Display the outputs
    cout<<"Circuit Board Price"<<endl;
    cout<<"Cost to make Circuit Board : $"<<cBrd<<endl;
    cout<<"Company profit             : "<<pPft<<"%"<<endl;
    cout<<"Selling price              : $"<<sPce<<endl;
    
    //Exit the program

    return 0;
}

