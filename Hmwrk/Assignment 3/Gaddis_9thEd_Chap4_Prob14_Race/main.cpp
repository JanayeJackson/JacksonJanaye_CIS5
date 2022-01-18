/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 7:53 PM
 * Purpose:  Hmwk 3
 *           Sorting people based on time they finished race
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
    string n1,          //Runner 1
           n2,          //Runner 2
           n3;          //Runner 3
    float t1,           //Runner 1 time
          t2,           //Runner 2 time
          t3;           //RUnner 3 time
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;       //Heading
    cout<<"Input 3 Runners"<<endl;            //User input
    cin>>n1>>t1;
    cin>>n2>>t2;
    cin>>n3>>t3;
    
    if(t1<0 || t2<0 || t3<0)                  //Input Validation
        return 0;
        
    //Map inputs -> outputs
    cout<<"Their names, then their times"<<endl;    //Heading
    
    if(t1<t2 && t1<t3)                              //if else/if else statements and cases
    {
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        if(t2<t3)
        {
            cout<<n2<<"\t"<<setw(3)<<t2<<endl;
            cout<<n3<<"\t"<<setw(3)<<t3;
        }
        else
        {
            cout<<n3<<"\t"<<setw(3)<<t3<<endl;
            cout<<n2<<"\t"<<setw(3)<<t2;
        }
        
    }
    else if(t2<t1 && t2<t3)
    {
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        if(t1<t3)
        {
            cout<<n1<<"\t"<<setw(3)<<t1<<endl;
            cout<<n3<<"\t"<<setw(3)<<t3;
        }
        else
        {
            cout<<n3<<"\t"<<setw(3)<<t3<<endl;
            cout<<n1<<"\t"<<setw(3)<<t1;
        }
        
    }
    else
    {
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        if(t1<t2)
        {
            cout<<n1<<"\t"<<setw(3)<<t1<<endl;
            cout<<n2<<"\t"<<setw(3)<<t2;
        }
        else
        {
            cout<<n2<<"\t"<<setw(3)<<t2<<endl;
            cout<<n1<<"\t"<<setw(3)<<t1;
        }
        
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}