/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 24, 2022, 8:14 PM
 * Purpose:  Basic Menu with Functions for exams and homework
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>    //Format Library
#include <math.h>     //Math Library

using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float lPerG = 0.264179f;

//Function Prototypes
void prob0();                      //Problem 0 - Sum - Gaddis 9thEd Chap5 Prob1
void prob1();                      //Problem 1 - PayInPennies - Gaddis 9thEd Chap5 Prob7
void prob2();                      //Problem 2 - MinMax - Gaddis 9thEd Chap5 Prob13
void prob3();                      //Problem 3 - Rectangle - Gaddis 9thEd Chap5 Prob22
void prob4();                      //Problem 4 - Pattern - Gaddis 9thEd Chap5 Prob23
void prob5();                      //Problem 5 - MPG - Savitch 9thEd Chap4 Prob1
void prob6();                      //Problem 6 - MPG Efficieny - Savitch 9thEd Chap4 Prob2
void prob7();                      //Problem 7 - Inflation - Savitch 9thEd Chap4 Prob4
void prob8();                      //Problem 8 - Inflate - Savitch 9thEd Chap4 Prob5
void prob9();                      //Problem 9 - Max  - Savitch 9thEd Chap4 Prob9

float MPG(int, int);               //returns the gas mileage in Miles Per Gallon
float inRate(float, float);        //returns the inflation rate
float inflate(float, float);       //returns the estimated price based on inflation rate
float max(float, float);           //returns max number out of two numbers 
float max(float, float, float);    //returns max number out of three numbers

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 -      Sum      - Gaddis 9thEd Chap5 Prob1"<<endl;
        cout<<"Problem 1 -  PayInPennies - Gaddis 9thEd Chap5 Prob7"<<endl;
        cout<<"Problem 2 -     MinMax    - Gaddis 9thEd Chap5 Prob13"<<endl;
        cout<<"Problem 3 -   Rectangle   - Gaddis 9thEd Chap5 Prob22"<<endl;
        cout<<"Problem 4 -    Pattern    - Gaddis 9thEd Chap5 Prob23"<<endl;
        cout<<"Problem 5 -      MPG      - Savitch 9thEd Chap4 Prob1"<<endl;
        cout<<"Problem 6 - MPG Efficieny - Savitch 9thEd Chap4 Prob2"<<endl;
        cout<<"Problem 7 -   Inflation   - Savitch 9thEd Chap4 Prob4"<<endl;
        cout<<"Problem 8 -    Inflate    - Savitch 9thEd Chap4 Prob5"<<endl;
        cout<<"Problem 9 -      Max      - Savitch 9thEd Chap4 Prob9"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:prob0();break;
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
        cout<<endl;
    }while(choose>=0 && choose<=9);

    return 0;
}

void prob0(){
    //Set the random number seed
    
    //Declare Variables
    unsigned short num,    //Number from user input
                   sum,    //Sum of all numbers up until num
                   count;  //Counter 
    //Initialize or input i.e. set variable value
    sum = 0;
    cin>>num;
    
    //Map inputs -> outputs
    for(count = 1; count<=num; count++)
        sum+=count;
    
    //Display the outputs
    cout<<"Sum = "<<sum;

}

void prob1(){
    //Set the random number seed
    
    //Declare Variables
    int days;           //Days in pay period
    
    //Initialize or input i.e. set variable values
    cin>>days;
    if(days < 1)
        exit(1);
        
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Pay = $"<<((pow(2,days)-1)/100.0);
}

void prob2(){
    //Set the random number seed
    
    //Declare Variables
    int min,             //Minimum value
        max,             //Maximum value
        num;             //User number
    
    //Initialize or input i.e. set variable values
    cin>>num;
    min = num;
    max = num;
    
    //Map inputs -> outputs
    do{
        if(num < min)
            min=num;
        else if(num > max)
            max=num;
        cin>>num;
    }while(num != -99);
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
}

void prob3(){
    //Set the random number seed
    
    //Declare Variables
    int num;              //length and width of rectangle
    char cha;             //User input for character
    
    //Initialize or input i.e. set variable values
    cin>>num>>cha;

    
    //Map inputs -> outputs

    
    //Display the outputs
    for(int i=1; i<=num; i++)
    {
        for(int n=1; n<=num; n++)
            cout<<cha;
        if(i<num)
            cout<<endl;
    }
}

void prob4(){
    //Set the random number seed
    
    //Declare Variables
    int num,             //User input
        i,               //counter
        n;               ///counter
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(i = 1; i <= num; i++)
    {
        for(int n = 1; n <= i; n++)
            cout<<"+";
        cout<<endl;
        cout<<endl;
    }
    for(i = num; i >= 1; i--)
    {
        for(n = i; n >= 1; n--)
            cout<<"+";
        if(i>1)
        {
            cout<<endl;
            cout<<endl;
        }
    }
}

void prob5(){
    //Set the random number seed
    
    //Declare Variables
    int lit,             //Liters of gasoline used
        miles;           //Miles driven
    char ans;            //User input
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"Enter number of liters of gasoline:\n"<<endl;
    cin>>lit;
    cout<<"Enter number of miles traveled:\n"<<endl;
    cin>>miles;
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2);
    cout<<"miles per gallon:\n"<<MPG(lit, miles)<<endl;
    cout<<"Again:"<<endl;
    cin>>ans;
    if(ans == 'y')
        cout<<endl;
    
    }while(ans == 'y');
    //Display the outputs
}

void prob6(){
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
}

void prob7(){
    //Set the random number seed
    
    //Declare Variables
    float pric1,        //Price today 
          pric2;        //Price one year ago
    char ans;           //User answer
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;
        cin>>pric1;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pric2;
    
    //Map inputs -> outputs
    
    //Display the outputs
        cout<<fixed<<setprecision(2);
        cout<<"Inflation rate: "<<inRate(pric1,pric2)<<"%\n"<<endl;
        cout<<"Again:"<<endl;
        
        cin>>ans;
        
        if(ans=='y')
            cout<<endl;
    }while(ans =='y');
}

void prob8(){
    //Set the random number seed
    
    //Declare Variables
    float pric1,        //Price today 
          pric2,        //Price one year ago
          pric3,        //Price in one year 
          pric4,        //Price in two years 
          rate;         //Inflation rate
    char ans;           //User answer
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;
        cin>>pric1;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pric2;
    
    //Map inputs -> outputs
    rate = inRate(pric1, pric2);
    pric3 = inflate(pric1, rate);
    pric4 = inflate(pric3, rate);
    
    //Display the outputs
        cout<<fixed<<setprecision(2);
        cout<<"Inflation rate: "<<inRate(pric1,pric2)<<"%\n"<<endl;
        cout<<"Price in one year: $"<<pric3<<endl;
        cout<<"Price in two year: $"<<pric4<<endl;
        cout<<"\nAgain:"<<endl;
        
        cin>>ans;
        
        if(ans=='y')
            cout<<endl;
    }while(ans =='y');
}

void prob9(){
    //Set the random number seed
    
    //Declare Variables
    float num1,          //first number
          num2,          //second number
          num3;          //third number
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:\n"<<endl;
    cin>>num1;
    cout<<"Enter Second number:\n"<<endl;
    cin>>num2;
    cout<<"Enter third number:\n"<<endl;
    cin>>num3;
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Largest number from two parameter function:\n"<<max(num1,num2)<<endl;
    cout<<"\nLargest number from three parameter function:\n"<<max(num1,num2,num3)<<endl;
}

float MPG(int liter, int miles)
{
    return miles/(liter*lPerG);
}

float max(float one, float two)
{
    if(one>two)
        return one;
    else
        return two;
}

float inRate(float nPrice, float oPrice)
{
    return ((nPrice - oPrice)/oPrice)*100;
}

float inflate(float price, float rate)
{
    return price*((rate*0.01) + 1);
}

float max(float one, float two, float three)
{
    if(one>two && one>three)
        return one;
    else if(two>one && two>three)
        return two;
    else
        return three;
}