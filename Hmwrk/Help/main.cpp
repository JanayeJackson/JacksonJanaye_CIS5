/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    char pckge;
    int hours;
    float bill;
    
    //Initialize or input i.e. set variable values
    bill=0.0f;
    
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pckge>>hours;

    //Map inputs -> outputs
    switch(pckge)
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
        default : return 0;
    }
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Bill = $"<<setw(6)<<bill;

    //Exit stage right or left!
    return 0;
}