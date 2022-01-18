/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 10:16 PM
 * Purpose:  Hmwk 3
 *           Converting arabic numbers to Roman Numerals
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
    char n1000s,           //char value for 1000s in number
         n100s,            //char value for 100s in number
         n10s,             //char value for 10s in number
         n1s;              //char value for 1s in number
    unsigned short arabic; //Number to be converted
    string roman="";       //Roman Numeral
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;  //Heading
    cout<<"Input the integer to convert."<<endl;        
    cin>>arabic;                                        //User input
    
    if(arabic < 1000 || arabic > 3000)                  //Input Validation
    {
        cout<<arabic<<" is Out of Range!";
        return 0;
    }
    //Map inputs -> outputs
    n1000s=arabic/1000;                 //getting 1000s
    n100s=arabic%1000/100;              //getting 100s
    n10s=arabic%100/10;                 //getting 10s
    n1s=arabic%10;                      //getting 1s
    
    switch(n1000s)                      //switch if else/if else statement and case for 1000s
    {
        case 3: roman+="M";
        case 2: roman+="M";
        case 1: roman+="M";
                break;
        default: roman+="";
    }
    
    if(n100s>=5 && n100s<9)            //if and switch statement and case for 100s between 9 and 5
    { 
        roman+="D";
        switch(n100s)
        {
            case 8: roman+="C";
            case 7: roman+="C";
            case 6: roman+="C";
            break;
        }
    }
    switch(n100s)                       //switch if else/if else statement and case for 100s = to 9 or less than 5
    {
        case 9: roman+="CM";
                break;
        case 4: roman+="CD";
                break;
        case 3: roman+="C";
        case 2: roman+="C";
        case 1: roman+="C";
                break;
        default: roman+="";
    }
    
    if(n10s>=5 && n10s<9)            //if and switch statement and case for 10s between 9 and 5
    { 
        roman+="L";
        switch(n10s)
        {
            case 8: roman+="X";
            case 7: roman+="X";
            case 6: roman+="X";
            break;
        }
    }
    switch(n10s)                       //switch if else/if else statement and case for 10s = to 9 or less than 5
    {
        case 9: roman+="XC";
                break;
        case 4: roman+="XL";
                break;
        case 3: roman+="X";
        case 2: roman+="X";
        case 1: roman+="X";
                break;
        default: roman+="";
    }
    
    if(n1s>=5 && n1s<9)            //if and switch statement and case for 1s between 9 and 5
    { 
        roman+="V";
        switch(n1s)
        {
            case 8: roman+="I";
            case 7: roman+="I";
            case 6: roman+="I";
            break;
        }
    }
    switch(n1s)                       //switch if else/if else statement and case for 1s = to 9 or less than 5
    {
        case 9: roman+="IX";
                break;
        case 4: roman+="IV";
                break;
        case 3: roman+="I";
        case 2: roman+="I";
        case 1: roman+="I";
                break;
        default: roman+="";
    }
    //Display the outputs
    
    cout<<arabic<<" is equal to "<<roman;

    //Exit stage right or left!
    return 0;
}