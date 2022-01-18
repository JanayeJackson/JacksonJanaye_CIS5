/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 12:29 PM
 * Purpose:  Hmwk 2
 *           Calculating how much soda will kill a person 
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float cnvrsn = 45359.2/100;    //Pounds to grams conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int mouse,         //weight of the mouse 
        kMouse,        //Grams of sweetner to kill mouse
        person,        //Person weight in pounds
        soda,          //weight of soda in grams
        cans;          //cans to kill person
    float sweet,       //sweetner in soda in grams
          kPerson,     //Grams of sweetner to kill person
          weight;      //weight of person in grams
    
    
    //Initialize or input i.e. set variable values
    mouse=35;
    kMouse=5;
    soda=350;
    sweet=0.001f;
    
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>person;
    
    //Map inputs -> outputs
    weight=person*cnvrsn;
    kPerson=(weight*kMouse)/mouse;
    cans=(int)(kPerson/(soda*sweet));
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans\nwhich can be consumed is "<<cans<<" cans"; 
    


    //Exit stage right or left!
    return 0;
}
