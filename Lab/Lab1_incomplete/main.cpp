/* 
 * File:   main.cpp
 * Author: Janaye Jackson
 * Created on January 10, 2022, 12:42 AM
 * Purpose:  Lab 1 Optimize Fuel Purchase
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float gGage,  //Gas Gage percentage full
        tnkSize,  //Size of tank in gallons
            mpg;  //Miles per Gallon
    float galReq; //Gallons Required at fill-up
    float cPerG1, //Cost of gas per Gallon at Gas Station 1
        mtGS1,    //Miles to Gas Station 1
        cPerG2,   //Cost of gas per Gallon at Gas Station 2
        mtGS2;    //Miles to Gas Station 2
    float cFUP1,  //Cost to fill up at Gas Station 1
        cFUP2,    //Cost to fill up at Gas Station 2
        dist1,    //Total distance to and from Gas Station 1
        dist2,    //Total distance to and from Gas Station 2
        cDist1,   //Cost to drive to and from Gas Station 1  
        cDist2,   //Cost to drive to and from Gas Station 2
        tCost1,   //Total cost with mileage to Gas Station 1
        tCost2,   //Total cost with mileage to Gas Station 2
        pStn1,    //Price per gallon when mileage to station 1 added
        pStn2;    //Price per gallon when mileage to station 2 added
            
    
    //Initialize Variables
    gGage=0.75f;//75% full
    tnkSize=2.2e1f;//22.0 -> Number of gallons
    mpg=0.17e2f;   //17.0 -> Gas mileage
    cPerG1=4.25f;
    cPerG2=4.09f;
    mtGS1=10.0f;
    mtGS2=20.0f;
    
    //Map the inputs/known to the outputs
    galReq=tnkSize*(1-gGage);
    
    cFUP1=cPerG1*galReq;
    dist1=2*mtGS1;
    cDist1=(dist1/mpg)*cPerG1;
    tCost1=cFUP1+cDist1;
    pStn1=tCost1/galReq; 
    
    cFUP2=cPerG2*galReq;
    dist2=2*mtGS2;
    cDist2=(dist2/mpg)*cPerG2;
    tCost2=cFUP2+cDist2;
    pStn2=tCost2/galReq; 
    
    //Display the outputs
    cout<<"Gas Gage % Full       = "<<gGage*CNVPERC<<"%"<<endl;
    cout<<"Size of Tank          = "<<tnkSize<<" gallons"<<endl;
    cout<<"Gas Mileage           = "<<mpg<<" mpg"<<endl;
    cout<<"Gallons at fill up    = "<<galReq<<" gallons"<<endl;
    cout<<""<<endl;
    
    cout<<"The Cost of Gas Station 1"<<endl;
    cout<<"Gas Cost per Gallon   = "<<cPerG1<<endl;
    cout<<"Miles to Gas Station  = "<<mtGS1<<endl;
    cout<<"Cost to Fill Up       = "<<cFUP1<<endl;
    cout<<"Total Distance Driven = "<<dist1<<endl;
    cout<<"Cost to drive to and\nfrom Gas Station      = "<<cDist1<<endl;
    cout<<"Total Cost with Mileage\nto Gas Station        = "<<tCost1<<endl;
    cout<<"Price Per Gallon Based on Mileage to Gas Station = "<<pStn1<<endl;
    cout<<""<<endl;
    
    cout<<"The Cost of Gas Station 1"<<endl;
    cout<<"Gas Cost per Gallon   = "<<cPerG2<<endl;
    cout<<"Miles to Gas Station  = "<<mtGS2<<endl;
    cout<<"Cost to Fill Up       = "<<cFUP2<<endl;
    cout<<"Total Distance Driven = "<<dist2<<endl;
    cout<<"Cost to drive to and\nfrom Gas Station      = "<<cDist2<<endl;
    cout<<"Total Cost with Mileage\nto Gas Station        = "<<tCost2<<endl;
    cout<<"Price Per Gallon Based on Mileage to Gas Station = "<<pStn2<<endl;

    //Exit the program
    return 0;
}