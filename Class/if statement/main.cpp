/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:31 PM
 * Purpose: Testing if else statements
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
    int temperature,
            pressure; 
    //Initialize all variables
    temperature = 80;
    pressure = 250;
            
    //Process or Map solution
    if ((temperature >= 100) || (pressure >= 200))
        cout<<"Warning";
    else
        cout<<"OK";
    //Display the output
    
    //Exit the program
    return 0;
}