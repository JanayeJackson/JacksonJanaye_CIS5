/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 4:30 PM
 * Purpose:  Hmwk 3
 *           Calculating points based on book purchases
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int books,         //Books purchased
        points;        //Points earned 
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    
    //Map inputs -> outputs
    switch(books)            //if else/if else cases
    {
        case 0: points=0;
                break;
        case 1: points=5;
                break;
        case 2: points=15;
                break;
        case 3: points=30;
                break;
        default: points=60;
                 break;
    }
    
    //Display the outputs
    cout<<"Books purchased =  "<<books<<endl;
    cout<<"Points earned   = "<<points;

    //Exit stage right or left!
    return 0;
}