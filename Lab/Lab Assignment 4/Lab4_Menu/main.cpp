/*
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 18, 2022, 4:32 PM
 * Purpose:  Lab 4
 *           Menu for Assignment 3
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>   //Format Library

using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 -     Sort Names      - Gaddis 9thEd Chap4 Prob08"<<endl;
        cout<<"Problem 1 -       Books         - Gaddis 9thEd Chap4 Prob11"<<endl;
        cout<<"Problem 2 -    Bank Charges     - Gaddis 9thEd Chap4 Prob12"<<endl;
        cout<<"Problem 3 -       Race          - Gaddis 9thEd Chap4 Prob14"<<endl;
        cout<<"Problem 4 -        ISP          - Gaddis 9thEd Chap4 Prob23"<<endl;
        cout<<"Problem 5 - Rock Paper Scissors - Savitch 9thEd Chap3 PracProb1"<<endl;
        cout<<"Problem 6 -  Roman Conversion   - Savitch 9thEd Chap3 Prob3"<<endl;
        cout<<"Problem 7 -  Compatible Signs   - Savitch 9thEd Chap3 PracProb4"<<endl;
        cout<<"8 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
                    //Declare outer loop Variables
                    string name1,        //First name
                           name2,        //Second name
                           name3;        //Third name 
    
                     //Initialize or input outer loop variables i.e. set variable values
                    cout<<"Sorting Names"<<endl;
                    cout<<"Input 3 names"<<endl;
                    cin>>name1>>name2>>name3;
    
                    //Map inputs -> outputs
    
                    //Display the outputs
                    if(name1<name2 && name1<name3)    //if else/if else cases
                    {
                        cout<<name1<<endl;
                        if(name2<name3)
                        {
                            cout<<name2<<endl;
                            cout<<name3;
                        }
                        else
                        {
                            cout<<name3<<endl;
                            cout<<name2;
                        }
                    }
                    else if(name2<name1 && name2<name3)
                    {
                        cout<<name2<<endl;
                        if(name1<name3)
                        {
                            cout<<name1<<endl;
                            cout<<name3;
                        }
                        else
                        {
                            cout<<name3<<endl;
                            cout<<name1;
                        }
                    }
                    else
                    {
                        cout<<name3<<endl;
                        if(name1<name2)
                        {
                            cout<<name1<<endl;
                            cout<<name2;
                        }
                        else
                        {
                            cout<<name2<<endl;
                            cout<<name1;
                        }
                    }
                    cout<<endl;
                break;
            }
            case 1:{
                    //Declare Outer Loop Variables
                    int books,         //Books purchased
                        points;        //Points earned 
    
                    //Initialize or input Outer Loop i.e. set variable values
                    cout<<"Book Worm Points"<<endl;
                    cout<<"Input the number of books purchased this month."<<endl;
                    cin>>books;
    
                    //Map inputs -> outputs
                    switch(books)            //if else/if else cases
                    {
                        case 0: points=0;
                            break;
                        case 1: points=5;
                            break;
                        case 2: points=15;
                            break;
                        case 3: points=30;
                            break;
                        default: points=60;
                            break;
                    }
    
                    //Display the outputs
                    cout<<"Books purchased =  "<<books<<endl;
                    cout<<"Points earned   = "<<points<<endl;
                break;
            }
            case 2:{
                    //Declare Outer Loop Variables
                    int chck;           //Checks
                    float bal,          //Initial bank balance
                          nBal,         //New balance
                          fee,          //Standard fee
                          cFee,         //Check fee
                          lFee;         //Low balance fee
    
                    //Initialize or input Outer Loop i.e. set variable values
                    lFee=0.0f;                                       //Low balance fee
                    fee=10.0f;                                      //Standard fee
    
                    cout<<"Monthly Bank Fees"<<endl;                //Heading
                    cout<<"Input Current Bank Balance and Number of Checks"<<endl; //User input
                    cin>>bal;
    
                    if(bal<0)                                      //input validtaion
                    {
                        cout<<"The account is overdrawn";
                        return 0;
                    }
                    cin>>chck;
    
                    //Map inputs -> outputs
                    if(chck<20)             //if else/if else cases
                    {
                        cFee=0.10*chck;
                    }
                    else if(chck>=20 && chck<40)
                    {
                        cFee=0.08*chck;
                    }
                    else if(chck>=40 && chck<60)
                    {
                        cFee=0.06*chck;
                    }
                    else
                    {
                        cFee=0.04*chck;
                    }
                    if(bal<400)
                    {
                    lFee=15.0f;
                    }
    
                    nBal=bal-cFee-fee-lFee;   //new balance
    
                    //Display the outputs
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"Balance     $"<<setw(9)<<bal<<endl;
                    cout<<"Check Fee   $"<<setw(9)<<cFee<<endl;
                    cout<<"Monthly Fee $"<<setw(9)<<fee<<endl;
                    cout<<"Low Balance $"<<setw(9)<<lFee<<endl;
                    cout<<"New Balance $"<<setw(9)<<nBal<<endl;
                break;   
            }
            case 3:{
                    //Declare Outer Loop Variables
                    string n1,          //Runner 1
                    n2,          //Runner 2
                    n3;          //Runner 3
                    float t1,           //Runner 1 time
                    t2,           //Runner 2 time
                    t3;           //RUnner 3 time
    
                    //Initialize or input Outer Loop i.e. set variable values
                    cout<<"Race Ranking Program"<<endl;       //Heading
                    cout<<"Input 3 Runners"<<endl;            //User input
                    cin>>n1>>t1;
                    cin>>n2>>t2;
                    cin>>n3>>t3;
    
                    if(t1<0 || t2<0 || t3<0)                  //Input Validation
                        return 0;
        
                    //Map inputs -> outputs
                    cout<<"Their names, then their times"<<endl;    //Heading
    
                    if(t1<t2 && t1<t3)                              //if else/if else statements and cases
                    {
                        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                        if(t2<t3)
                        {
                            cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                            cout<<n3<<"\t"<<setw(3)<<t3;
                        }
                        else
                        {
                            cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                            cout<<n2<<"\t"<<setw(3)<<t2;
                        }
        
                    }
                    else if(t2<t1 && t2<t3)
                    {
                        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                        if(t1<t3)
                        {
                            cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                            cout<<n3<<"\t"<<setw(3)<<t3;
                        }
                        else
                        {
                            cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                            cout<<n1<<"\t"<<setw(3)<<t1;
                        }
        
                    }
                    else
                    {   
                        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
                        if(t1<t2)
                        {
                            cout<<n1<<"\t"<<setw(3)<<t1<<endl;
                            cout<<n2<<"\t"<<setw(3)<<t2;
                        }
                        else
                        {
                            cout<<n2<<"\t"<<setw(3)<<t2<<endl;
                            cout<<n1<<"\t"<<setw(3)<<t1;
                        }
        
                    }
                    cout<<endl;
                break;
            }
            case 4:{
                    //Declare Outer Loop Variables
                    char pckge;           //Cable package choice
                    int hours;            //Hours of cable used
                    float bill;           //Cable bill
    
                    //Initialize or input Outer Loop i.e. set variable values
                    bill=0.0f;              //Cable bill
    
                    cout<<"ISP Bill"<<endl; //Heading
                    cout<<"Input Package and Hours"<<endl; //User input
                    cin>>pckge>>hours;
    
                    if(hours > 744)    //Validtaion check
                        return 0;

                    //Map inputs -> outputs
                    switch(pckge)     //if else/if else cases
                    {
                        case 'A': bill=9.95f;
                            if(hours>10)
                            bill+=(hours - 10)*2;
                        break;
                        case 'B': bill=14.95f;
                            if(hours>20)
                            bill+=hours-20;
                        break;
                        case 'C': bill=19.95f;
                        break;
                        default : return 0;  //Validation check
                    }
                    //Display the outputs
                    cout<<fixed<<setprecision(2);
                    cout<<"Bill = $"<<setw(6)<<bill<<endl;
                break;
            }
            case 5:{
                    //Declare Outer Loop Variables
                    char user1,        //User 1 choise
                         user2;        //User 2 choice
     
                    //Initialize or input Outer Loop i.e. set variable values
                    cout<<"Rock Paper Scissors Game"<<endl;            //Heading
                    cout<<"Input Player 1 and Player 2 Choices"<<endl; //User input
                    cin>>user1>>user2;
    
                    //Map inputs -> outputs
    
    
                    //Display the outputs
                    switch(user1)                                      //switch if else/if else statements and cases
                    { 
                        case 'p':
                        case 'P': switch(user2)
                        {
                            case 'R':
                            case 'r': cout<<"Paper covers rock.";
                                  break;
                            case 'S':
                            case 's': cout<<"Scissors cuts paper.";
                                  break;
                            default: cout<<"Nobody wins.";
                        }
                        break;
                        case 'R':
                        case 'r': switch(user2)
                        {
                            case 'P':
                            case 'p': cout<<"Paper covers rock.";
                                  break;
                            case 'S':
                            case 's': cout<<"Rock breaks scissors.";
                                  break;
                            default: cout<<"Nobody wins.";
                        }
                        break;
                        case 'S':
                        case 's': switch(user2)
                        {
                            case 'R':
                            case 'r': cout<<"Rock breaks scissors";
                                  break;
                            case 'P':
                            case 'p': cout<<"Scissors cuts paper.";
                                  break;
                            default: cout<<"Nobody wins.";
                        }
                        break;
                 
                        default: cout<<"Invalid Input";
                    }
                    cout<<endl;
                break;
            }
            case 6:{
                    //Declare Outer Loop Variables
                    char n1000s,           //char value for 1000s in number
                         n100s,            //char value for 100s in number
                         n10s,             //char value for 10s in number
                         n1s;              //char value for 1s in number
                    unsigned short arabic; //Number to be converted
                    string roman="";       //Roman Numeral
    
                    //Initialize or input Outer Loop i.e. set variable values
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
    
                    cout<<arabic<<" is equal to "<<roman<<endl;
                break;
            }
            case 7:{
                    //Declare Outer Loop Variables
                    string s1,         //User input for sign 1
                           s2;         //User input for sign 2
                    char e1,           //Astrology element for sign 1
                         e2;           //Astrology element for sign 2
    
                    //Initialize or input Outer Loop i.e. set variable values
                    cout<<"Horoscope Program which examines compatible signs."<<endl; //Heading 
                    cout<<"Input 2 signs."<<endl;                                     
                    cin>>s1>>s2;                                                      //User input
    
                    //Map inputs -> outputs
                    if(s1 == "Taurus" || s1 == "Virgo" || s1 == "Capricorn")         //if else/if else statements and cases for sign 1
                        e1 = 'E';
                    else if(s1 == "Cancer" || s1 == "Scorpio" || s1 == "Pisces")
                        e1 = 'W';
                    else if(s1 == "Gemini" || s1 == "Libra" || s1 == "Aqaurius")
                        e1 = 'A';
                    else
                        e1 = 'F';
    
                    if(s2 == "Taurus" || s2 == "Virgo" || s2 == "Capricorn")        //if else/if else statements and cases for sign 2
                        e2 = 'E';
                    else if(s2 == "Cancer" || s2 == "Scorpio" || s2 == "Pisces")
                        e2 = 'W';
                    else if(s2 == "Gemini" || s2 == "Libra" || s2 == "Aqaurius")
                        e2 = 'A';
                    else
                        e2 = 'F';   
        
                    //Display the outputs
                    if(e1 == 'E' && e2 == 'E')                                   //if else/if statements and cases for compatiblity
                        cout<<s1<<" and "<<s2<<" are compatible Earth signs.";
                    else if (e1 == 'W' && e2 == 'W')
                        cout<<s1<<" and "<<s2<<" are compatible Water signs.";
                    else if (e1 == 'A' && e2 == 'A')
                        cout<<s1<<" and "<<s2<<" are compatible Air signs.";
                    else if (e1 == 'F' && e2 == 'F')
                        cout<<s1<<" and "<<s2<<" are compatible Fire signs.";
                    else
                        cout<<s1<<" and "<<s2<<" are not compatible signs.";
                    cout<<endl;
                break;
            }
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=7);

    return 0;
}