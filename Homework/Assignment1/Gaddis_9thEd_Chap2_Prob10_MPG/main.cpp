/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 5, 2024, 7:10 PM
 * Purpose: Calculates cars MPG
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Declare all variables
    short miles; //Total miles of the car before refueling 
    short gallons; //Total gallons needed to fill car
    short mpg; //Miles per gallon the car gets
    
    //Initialize all variables
    miles = 375;
    gallons = 15;
    //Process or Map solution
    mpg = miles/gallons; //Divide cars miles by total gallons needed
    
    //Display the output
    std::cout<<"Number of miles per gallon is "<<mpg<<"mpg."<<endl;
    
    //Exit the program
    return 0;
}

