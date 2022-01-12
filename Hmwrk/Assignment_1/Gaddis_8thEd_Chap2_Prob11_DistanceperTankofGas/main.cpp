/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 11, 2022, 5:45 PM
 * Purpose: Hmwk 1
 *          Calculate distance traveled 
 *          per tank of gas 
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
    float tnk,          //Size of tank in gallons
            mpgT,       //Miles per gallon in town 
            mpgH;       //Miles per gallon on highway 
    float dist,         //Total distance
            mpgA;       //Average miles per gallon
    
    //Initialize Variables
    tnk=20.0f;
    mpgT=23.5f;
    mpgH=28.9f;
    
    //Map the inputs/known to the outputs
    mpgA=(mpgT+mpgH)/2;
    dist=tnk*mpgA;
            
    
    //Display the outputs
    cout<<"Distance per Tank of Gas"<<endl;
    cout<<"Tank size                   : "<<tnk<<" gallons"<<endl;
    cout<<"MPG in town                 : "<<mpgT<<" mpg"<<endl;
    cout<<"MPG on hhighway             : "<<mpgH<<" mpg"<<endl;
    cout<<"Average MPG                 : "<<mpgA<<" mpg"<<endl;
    cout<<"Distance on one tank of gas : "<<dist<<" miles"<<endl;
    
    //Exit the program

    return 0;
}

