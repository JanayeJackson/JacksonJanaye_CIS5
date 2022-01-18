/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 16, 2019, 8:54 PM
 * Purpose:  Hmwk 2
 *           Trigonometry
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int angle;
    float sVal,
        cVal,
        tVal;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Map inputs -> outputs
    sVal=sin(angle*(PI/180));
    cVal=cos(angle*(PI/180));
    tVal=tan(angle*(PI/180));
    
    //Display the outputs
    cout<<fixed<<setprecision(4);
    cout<<"sin("<<noshowpoint<<angle<<") = "<<sVal<<endl;
    cout<<"cos("<<noshowpoint<<angle<<") = "<<cVal<<endl;
    cout<<"tan("<<noshowpoint<<angle<<") = "<<tVal;

    //Exit stage right or left!
    return 0;
}