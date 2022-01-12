/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 9, 2022, 8:52 PM
 * Purpose: Hmwk 1
 *          Calculating the annual pay of
 *          an employee
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
    float pAmnt,        //bi-weekly pay check amount
          pPds;         //Amount of pay periods
    float aPay;         //Annual pay
    
    //Initialize Variables
    pAmnt=2200.0f;
    pPds=26.0f;
    
    //Map the inputs/known to the outputs
    aPay=pAmnt*pPds;
    
    //Display the outputs
    cout<<"Annual Pay"<<endl;
    cout<<"The annul pay for an employee who is paid $"<<pAmnt;
    cout<<" every two weeks for "<<pPds<<" pay periods is $"<<aPay<<endl;
    
    //Exit the program

    return 0;
}

