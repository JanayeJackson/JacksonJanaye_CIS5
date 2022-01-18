/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 4:12 PM
 * Purpose:  Hmwk 3
 *           Sorting Names alphabetically
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,        //First name
           name2,        //Second name
           name3;        //Third name 
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(name1<name2 && name1<name3)    //if else/if else cases
    {
        cout<<name1<<endl;
        if(name2<name3)
        {
            cout<<name2<<endl;
            cout<<name3;
        }
        else
        {
            cout<<name3<<endl;
            cout<<name2;
        }
    }
    else if(name2<name1 && name2<name3)
    {
        cout<<name2<<endl;
        if(name1<name3)
        {
            cout<<name1<<endl;
            cout<<name3;
        }
        else
        {
            cout<<name3<<endl;
            cout<<name1;
        }
    }
    else
    {
        cout<<name3<<endl;
        if(name1<name2)
        {
            cout<<name1<<endl;
            cout<<name2;
        }
        else
        {
            cout<<name2<<endl;
            cout<<name1;
        }
    }

    //Exit stage right or left!
    return 0;
}