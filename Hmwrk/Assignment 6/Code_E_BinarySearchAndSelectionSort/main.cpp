/* 
 * File:   main.cpp
 * Author:  Janaye Jackskon
 * Created on: February 04, 2022, 2:00 PM
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void selSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}

void fillAry(int array[], int size){
    for(int i = 0; i < size; i++)
        cin>>array[i];
    
}

void prntAry(int array[], int size, int num){
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
        if((i+1)%num == 0) 
            cout<<endl;
    }
    cout<<endl;
    
}

void selSrt(int array[], int size){
    int minI, minV;
    
    for(int i = 0; i < size - 1; i++){
        minI = i;
        minV = array[i];
        for(int n = i + 1; n < size; n++){
            if(array[n] < minV){
                minV = array[n];
                minI = n;
            }
        }
        array[minI] = array[i];
        array[i] = minV;
    }
    
}

bool binSrch(int array[], int size, int val, int &ind){
    int start = 0;
    int last = size - 1;
    int i = 0;
    
    bool found = false;
    
    while(!found && start <= last){
       int mid = (start + last)/2;
        if(array[mid] == val){
            found = true;
            ind = mid;
        }
        else if(array[mid] > val)
            last = mid - 1;
        else
            start = mid + 1;
            
    }
    return found;
}

