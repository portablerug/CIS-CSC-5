/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 4, 2024, 4:34 PM
 * Purpose: Prints out the amount of memory used by each of these data types.
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    char one; //Data type char with named variable
    int two; //Data type int with named variable 
    float three; //Data type float with named variable
    double four; //Data type double with named variable
    //Initialize all variables
    
    //Display the output
    cout<<"The amount of memory used by char data type is "<<sizeof(one)<<" bytes."<<endl;
    cout<<"The amount of memory used by int data type is "<<sizeof(two)<<" bytes."<<endl;
    cout<<"The amount of memory used by float data type is "<<sizeof(three)<<" bytes."<<endl;
    cout<<"The amount of memory used by double data type is "<<sizeof(four)<<" bytes."<<endl;

    //Exit the program
    return 0;
}

