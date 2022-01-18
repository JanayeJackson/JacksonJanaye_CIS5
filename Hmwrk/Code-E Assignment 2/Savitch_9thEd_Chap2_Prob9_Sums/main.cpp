/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 11:44 AM
 * Purpose:  Hmwk 2
 *           Adding negative and positive numbers
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
    int x;              //User input for negative or positive numbers
    int sumPos,         //Sum of positive numbers
        sumNeg;         //Sum of negative numbers
        
    //Initialize or input i.e. set variable values
    sumNeg=sumPos=0;
    
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
   
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<sumNeg<<endl;
    cout<<"Positive sum ="<<setw(4)<<sumPos<<endl;
    cout<<"Total sum    ="<<setw(4)<<sumPos+sumNeg;
    //Exit stage right or left!
    return 0;
}
