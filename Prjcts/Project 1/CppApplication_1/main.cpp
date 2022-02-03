/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nayen
 *
 * Created on February 2, 2022, 4:30 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<setw(2);
    
    cout<<"Room                  | Vertical Location | Horizontal Location |"<<endl;
    cout<<"Conservatory          | between  0 and  5 | between    0 and  5 |"<<endl;
    cout<<"Billiard Room         | between  8 and 12 | between    0 and  5 |"<<endl;
    cout<<"Library               | between 14 and 18 | between    0 and  6 |"<<endl;
    cout<<"Study                 | between 21 and 24 | between    0 and  6 |"<<endl;
    cout<<"Ballroom              | between  0 and  7 | between    8 and 15 |"<<endl;
    cout<<"Hall                  | between 18 and 24 | between    9 and 14 |"<<endl;
    cout<<"Kitchen               | between  0 and  6 | between   18 and 23 |"<<endl;
    cout<<"Dining Room           | between  9 and 15 | between   16 and 23 |"<<endl;
    cout<<"Lounge                | between 19 and 24 | between   17 and 23 |"<<endl;

    return 0;
}

