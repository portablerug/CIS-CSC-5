/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 17, 2024, 9:21 PM
 * Purpose: Template for Projects
 */

#include <iostream>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    int store1,
            store2,
            store3,
            store4,
            store5;

    float s1,
            s2,
            s3,
            s4,
            s5;
    //Initialize all variables
    
    
    //Display the output and take input
    cout<<"Enter today's sales for store 1: "<<endl;
    cin>>store1;
    
    cout<<"Enter today's sales for store 2: "<<endl;
    cin>>store2;
    
    cout<<"Enter today's sales for store 3: "<<endl;
    cin>>store3;
    
    cout<<"Enter today's sales for store 4: "<<endl;
    cin>>store4;
    
    cout<<"Enter today's sales for store 5: "<<endl; 
    cin>>store5;
    
    cout<<"SALES BAR CHART (Each * = $100)"<<endl;
    
    //Process or Map solution
    s1 = store1/100;
    s2 = store2/100;
    s3 = store3/100;
    s4 = store4/100;
    s5 = store5/100;
    
    
    cout<<"Store 1: ";
    for (int i=0; i <=s1; i++){
        cout<<"*";
    }
    cout<<endl;
    
    cout<<"Store 2: ";
    for (int i=0; i <=s2; i++){
        cout<<"*";
    }
    cout<<endl;
    
    cout<<"Store 3: ";
    for (int i=0; i <=s3; i++){
        cout<<"*";
    }
    cout<<endl;
    
    cout<<"Store 4: ";
    for (int i=0; i <=s4; i++){
        cout<<"*";
    }
    cout<<endl;
    
    cout<<"Store 5: ";
    for (int i=0; i <=s5; i++){
        cout<<"*";
    }
    cout<<endl;
    
            
    //Exit the program
    return 0;
}

