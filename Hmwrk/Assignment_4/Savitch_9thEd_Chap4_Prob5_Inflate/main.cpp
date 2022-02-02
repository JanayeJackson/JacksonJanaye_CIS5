/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on Janauary 24, 2022, 7:11 PM
 * Purpose:  Estimating prices based on inflation rates
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
float inflate(float, float);    //returns the estimated price based on inflation rate

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pric1,        //Price today 
          pric2,        //Price one year ago
          pric3,        //Price in one year 
          pric4,        //Price in two years 
          rate;         //Inflation rate
    char ans;           //User answer
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;
        cin>>pric1;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pric2;
    
    //Map inputs -> outputs
    rate = inRate(pric1, pric2);
    pric3 = inflate(pric1, rate);
    pric4 = inflate(pric3, rate);
    
    //Display the outputs
        cout<<fixed<<setprecision(2);
        cout<<"Inflation rate: "<<inRate(pric1,pric2)<<"%\n"<<endl;
        cout<<"Price in one year: $"<<pric3<<endl;
        cout<<"Price in two year: $"<<pric4<<endl;
        cout<<"\nAgain:"<<endl;
        
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

float inflate(float price, float rate)
{
    return price*((rate*0.01) + 1);
}