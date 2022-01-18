/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 11:14 AM
 * Purpose:  Hmwk 2
 *           Calculating salary based on a raise
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
    int salary;        //initial annual salary
    float rPay,        //Retroactive pay
          aSalary,     //New annual salary 
          mSalary,     //New monthly salary
          pIncrse;     //Percent pay increase
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>salary;
    pIncrse=0.076f;
    
    //Map inputs -> outputs
    rPay=(salary/2)*pIncrse;
    aSalary=salary*(1+pIncrse);
    mSalary=aSalary/12;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<rPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<aSalary<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<mSalary;

    //Exit stage right or left!
    return 0;
}