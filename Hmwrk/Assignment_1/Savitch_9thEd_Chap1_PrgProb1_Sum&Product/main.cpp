/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 9, 2022, 7:35 PM
 * Purpose: Hmwk 1
 *          Calculating Product and Sum 
 *          of two numbers. 
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
    int one,           //First integer for equations
        two;           //Second integer for equations
    int sum,           //Sum of integers
        prod;          //Product of integers
    
    //Initialize Variables
    one=15;
    two=12;
    
    //Map the inputs/known to the outputs
    sum=one+two;
    prod=one*two;
    
    //Display the outputs
    cout<<"This program outputs the sum and product of two integers:"<<endl;
    cout<<"The sum of "<<one<<" and "<<two<<" is: "<<sum<<endl;
    cout<<"The product of "<<one<<" and "<<two<<" is: "<<prod<<endl;
    
    //Exit the program

    return 0;
}

