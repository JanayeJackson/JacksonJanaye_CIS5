/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 16, 2022, 4:42 PM
 * Purpose:  Hmwk 2
 *           Calculating calories based on cookies ate
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
    //Heading 
    cout<<"Calorie Counter"<<endl;
   
    //Set the random number seed
    
    //Declare Variables
    float ckie,            //cookies per box
        svng,            //servings per box
        cal,             //calories per servings
        cCnsmd;          //cookies consumed
        
    float cnsmd,         //calories consumed
        cCal;            //Calories per cookie
     
    //Initialize or input i.e. set variable values
    ckie=40;
    svng=10;
    cal=300;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cCnsmd;
    
    //Map inputs -> outputs
    cCal = cal/(ckie/svng);
    cnsmd=cCal*cCnsmd;
    
    //Display the outputs
    cout<<"You consumed "<<cnsmd<<" calories.";

    //Exit stage right or left!
    return 0;
}
