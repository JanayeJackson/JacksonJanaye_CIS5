/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 8:52 PM
 * Purpose:  Hmwk 3
 *           Determining if astrology signs
 *           are compatible
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
    string s1,         //User input for sign 1
           s2;         //User input for sign 2
    char e1,           //Astrology element for sign 1
         e2;           //Astrology element for sign 2
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl; //Heading 
    cout<<"Input 2 signs."<<endl;                                     
    cin>>s1>>s2;                                                      //User input
    
    //Map inputs -> outputs
    if(s1 == "Taurus" || s1 == "Virgo" || s1 == "Capricorn")         //if else/if else statements and cases for sign 1
        e1 = 'E';
    else if(s1 == "Cancer" || s1 == "Scorpio" || s1 == "Pisces")
        e1 = 'W';
    else if(s1 == "Gemini" || s1 == "Libra" || s1 == "Aqaurius")
        e1 = 'A';
    else
        e1 = 'F';
    
    if(s2 == "Taurus" || s2 == "Virgo" || s2 == "Capricorn")        //if else/if else statements and cases for sign 2
        e2 = 'E';
    else if(s2 == "Cancer" || s2 == "Scorpio" || s2 == "Pisces")
        e2 = 'W';
    else if(s2 == "Gemini" || s2 == "Libra" || s2 == "Aqaurius")
        e2 = 'A';
    else
        e2 = 'F';   
        
    //Display the outputs
    if(e1 == 'E' && e2 == 'E')                                   //if else/if statements and cases for compatiblity
        cout<<s1<<" and "<<s2<<" are compatible Earth signs.";
    else if (e1 == 'W' && e2 == 'W')
        cout<<s1<<" and "<<s2<<" are compatible Water signs.";
    else if (e1 == 'A' && e2 == 'A')
        cout<<s1<<" and "<<s2<<" are compatible Air signs.";
    else if (e1 == 'F' && e2 == 'F')
        cout<<s1<<" and "<<s2<<" are compatible Fire signs.";
    else
        cout<<s1<<" and "<<s2<<" are not compatible signs.";

    //Exit stage right or left!
    return 0;
}