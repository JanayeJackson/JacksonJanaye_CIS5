/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 7:29 PM
 * Purpose:  Hmwk 3
 *           Calculating total Cable bill based on
 *           internet service provider and hours 
 *           of cable watched
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char pckge;           //Cable package choice
    int hours;            //Hours of cable used
    float bill;           //Cable bill
    
    //Initialize or input i.e. set variable values
    bill=0.0f;              //Cable bill
    
    cout<<"ISP Bill"<<endl; //Heading
    cout<<"Input Package and Hours"<<endl; //User input
    cin>>pckge>>hours;
    
    if(hours > 744)    //Validtaion check
        return 0;

    //Map inputs -> outputs
    switch(pckge)     //if else/if else cases
    {
        case 'A': bill=9.95f;
            if(hours>10)
            bill+=(hours - 10)*2;
            break;
        case 'B': bill=14.95f;
            if(hours>20)
            bill+=hours-20;
            break;
        case 'C': bill=19.95f;
            break;
        default : return 0;  //Validation check
    }
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Bill = $"<<setw(6)<<bill;

    //Exit stage right or left!
    return 0;
}