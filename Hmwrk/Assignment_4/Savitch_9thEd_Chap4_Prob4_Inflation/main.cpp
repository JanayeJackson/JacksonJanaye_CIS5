/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 24, 2022, 6:50 PM
 * Purpose:  Calculating infaltion rates
 *
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float inRate(float, float);  //returns the inflation rate

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pric1,        //Price today 
          pric2;        //Price one year ago
    char ans;           //User answer
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;
        cin>>pric1;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pric2;
    
    //Map inputs -> outputs
    
    //Display the outputs
        cout<<fixed<<setprecision(2);
        cout<<"Inflation rate: "<<inRate(pric1,pric2)<<"%\n"<<endl;
        cout<<"Again:"<<endl;
        
        cin>>ans;
        
        if(ans=='y')
            cout<<endl;
    }while(ans =='y');

    //Exit stage right or left!
    return 0;
}

float inRate(float nPrice, float oPrice)
{
    return ((nPrice - oPrice)/oPrice)*100;
}