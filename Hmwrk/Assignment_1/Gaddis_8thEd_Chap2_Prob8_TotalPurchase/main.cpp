/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 *
 * Created on January 9, 2022, 9:13 PM
 * Purpose: Hmwk 1
 *          Calculating total cost of a 
 *          purchase including sales tax
 */

//System Level Libraries

#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float item1,        //Cost of item 1
            item2,      //Cost of item 2
            item3,      //Cost of item 3
            item4,      //Cost of item 4
            item5,      //Cost of item 5
            tax;        //Tax percent 
    float sub,          //Subtotal of all items 
            sTax,       //Tax amount
            total;      //Total of tax and all items
    
    //Initialize Variables
    item1=15.95f;
    item2=24.95f;
    item3=6.95f;
    item4=12.95f;
    item5=3.95f;
    tax=0.07f;
    
    //Map the inputs/known to the outputs
    sub=item1+item2+item3+item4+item5;
    sTax=sub*tax;
    total=sub+sTax;
    
    //Display the outputs
    cout<<" Total Purchase"<<endl;
    cout<<"Item 1    : $"<<item1<<endl;
    cout<<"Item 2    : $"<<item2<<endl;
    cout<<"Item 3    : $"<<item3<<endl;
    cout<<"Item 4    : $"<<item4<<endl;
    cout<<"Item 5    : $"<<item5<<endl;
    cout<<"Subtotal  : $"<<sub<<endl;
    cout<<"Tax       : $"<<sTax<<endl;
    cout<<"Total     : $"<<total<<endl;
    
    
    //Exit the program

    return 0;
}

