/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 5:00 PM
 * Purpose:  Hmwk 3
 *           Calculating bank fees based on initial balance
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
    int chck;           //Checks
    float bal,          //Initial bank balance
          nBal,         //New balance
          fee,          //Standard fee
          cFee,         //Check fee
          lFee;         //Low balance fee
    
    //Initialize or input i.e. set variable values
    lFee=0.0f;                                       //Low balance fee
    fee=10.0f;                                      //Standard fee
    
    cout<<"Monthly Bank Fees"<<endl;                //Heading
    cout<<"Input Current Bank Balance and Number of Checks"<<endl; //User input
    cin>>bal;
    
    if(bal<0)                                      //input validtaion
    {
        cout<<"The account is overdrawn";
        return 0;
    }
    cin>>chck;
    
    //Map inputs -> outputs
    if(chck<20)             //if else/if else cases
    {
        cFee=0.10*chck;
    }
    else if(chck>=20 && chck<40)
    {
        cFee=0.08*chck;
    }
    else if(chck>=40 && chck<60)
    {
        cFee=0.06*chck;
    }
    else
    {
        cFee=0.04*chck;
    }
    if(bal<400)
    {
        lFee=15.0f;
    }
    
    nBal=bal-cFee-fee-lFee;   //new balance
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $"<<setw(9)<<bal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<cFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<fee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lFee<<endl;
    cout<<"New Balance $"<<setw(9)<<nBal;

    //Exit stage right or left!
    return 0;
}