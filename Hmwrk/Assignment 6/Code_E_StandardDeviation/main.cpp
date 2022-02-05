/* 
 * File:   main.cpp
 * Author:  Janaye Jackson
 * Created on: February 04, 2022, 12:40 PM
 * Purpose: Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,5);
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void init(float test[], int size){
    for(int i = 0; i < size; i++)
        cin>>test[i];
    
}

void print(float test[], int size, int num){
    cout<<fixed<<setprecision(7);
}

float avgX(float test[], int size){
    float avg = 0.0f;
    
    for(int i = 0; i < size; i++)
        avg +=  test[i];
    return avg/size;
}

float stdX(float test[], int size){
    float std = 0.0f;
    
    for(int i = 0; i < size; i++){
        std += pow(test[i] - avgX(test, size), 2);
    }
    std = sqrt(std/(size-1));
    return std;
}