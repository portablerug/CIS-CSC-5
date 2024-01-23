/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:31 PM
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
    float milBdgt,
            fedBdgt,
            mlPrcnt;
    //Initialize all variables
    milBdgt = 7.0e11;
    fedBdgt = 4.1e12;
     
    //Process or Map solution
    mlPrcnt = (fedBdgt/milBdgt) * 100;
    
    //Display the output
    cout<<"The percentage of the federal budget that was taken by the military "
            "budget in 2018 was "<< mlPrcnt << "%" <<endl;
    
    //Exit the program
    return 0;
}

