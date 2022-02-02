/* 
 * File:   main.cpp
 * Author: Janaye Jackson 
 * Created on January 24, 2022, 5:45 PM
 * Purpose:  Determining car with best fuel efficiency
 *
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float lPerG = 0.264179f;

//Function Prototypes
float MPG(int, int);  //returns the gas mileage in Miles Per Gallon

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int lit,             //Liters of gasoline used
        miles;           //Miles driven
    float car1,          //MPG car 1
          car2;          //MPG car 2
    char ans;            //User input
    
    //Initialize or input i.e. set variable values Car 1
    do{
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>lit>>miles;
        
    //Map inputs -> outputs Car 1
        car1=MPG(lit, miles);
        
    //Display the outputs Car 1
        cout<<fixed<<setprecision(2);
        cout<<"miles per gallon: "<<car1<<"\n"<<endl;
        
    //Initialize or input i.e. set variable values Car 2
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>lit>>miles;
    
    //Map inputs -> outputs Car 2
        car2=MPG(lit, miles);
        
    //Display the outputs
        cout<<"miles per gallon: "<<car2<<"\n"<<endl;
        
        if(car1>car2)
            cout<<"Car 1";
        else
            cout<<"Car 2";
        cout<<" is more fuel efficient\n"<<endl;
        cout<<"Again:"<<endl;
        cin>>ans;
        if(ans == 'y')
            cout<<endl;
    
    }while(ans == 'y');
    //Exit stage right or left!
    return 0;
}

float MPG(int liter, int miles) 
{
    return miles/(liter*lPerG);
}