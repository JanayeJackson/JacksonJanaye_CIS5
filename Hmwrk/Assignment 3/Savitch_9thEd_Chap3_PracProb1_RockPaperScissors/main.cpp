/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 17, 2022, 8:24 PM
 * Purpose:  Hmwk 3
 *           Determining the winner of a rock 
 *           paper scissors game
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
    //Set the random number seed
    
    //Declare Variables
    char user1,        //User 1 choise
         user2;        //User 2 choice
     
    //Initialize or input i.e. set variable values
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

    //Exit stage right or left!
    return 0;
}