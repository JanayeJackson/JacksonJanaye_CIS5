/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on:  February 04, 2022, 3:24 PM
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(string [], int);
void read(string [], int);
int  compare(string [], string [], string [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int size;
    size = 21;
    string key[size],answers[size],score[size];
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(key, size);
    read(answers, size);
    
    //Score the exam
    pRight=compare(key,answers,score, size);
    
    //Display the outputs
    //cout<<"Key     ";print(key, size);
    //cout<<"Answers ";print(answers, size);
    cout<<"C/W     ";print(score, size);
    cout<<"Percentage Correct = "<<pRight/(size-1)*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

void print(string input[], int size){
    for(int i = 1; i < size; i++)
        cout<<input[i]<<" ";
    cout<<endl;
}

void read(string input[], int size){
    for(int i = 0; i < size; i++)
        cin>>input[i];
}

int compare(string key[], string ans[], string scre[], int size){
    int num = 0;
    for(int i = 1; i < size; i++){
        if(key[i] == ans[i]){
            scre[i] = "C";
            num++;
        }
        else
            scre[i] = "W";
    }
    return num;
}

 