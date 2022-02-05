/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created: February 02, 2022, 11:19 AM
 * Purpose:  Sum of Dice Table
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int sum[][COLS], int row)
{
    for(int i = 1; i <= row; i++){
        for(int n = 1; n <= COLS; n++){
            sum[i-1][n-1] = i + n;
        }
        
    }
}

void prntTbl(const int sum[][COLS], int row)
{
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<"           C o l u m n s"<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i = 1; i <= row; i++){
        switch(i){
            case 2: cout<<"R";break;
            case 3: cout<<"O";break;
            case 4: cout<<"W";break;
            case 5: cout<<"S";break;
            default: cout<<" ";
        }
        cout<<"  "<<i<<" |";
        for(int n = 1; n<= COLS; n++){
            cout<<setw(4)<<sum[i-1][n-1];
        }
        cout<<endl;
    }
}