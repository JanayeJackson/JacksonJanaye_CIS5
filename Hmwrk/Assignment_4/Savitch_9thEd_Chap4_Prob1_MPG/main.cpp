/* 
 * File: main.cpp
 * Author: Janaye Jackson
 * Created on January 24, 2022, 5:00 PM
 * Purpose:  Calculate MPG
 *
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float lPerG = 0.264179f;

//Function Prototypes
float MPG(int, int);  //returns the gas mileage in Miles Per Gallon

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int lit,             //Liters of gasoline used
        miles;           //Miles driven
    char ans;            //User input
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"Enter number of liters of gasoline:\n"<<endl;
    cin>>lit;
    cout<<"Enter number of miles traveled:\n"<<endl;
    cin>>miles;
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    cout<<"miles per gallon:\n"<<MPG(lit, miles)<<endl;
    cout<<"Again:"<<endl;
    cin>>ans;
    if(ans == 'y')
        cout<<endl;
    
    }while(ans == 'y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float MPG(int liter, int miles)
{
    return miles/(liter*lPerG);
}