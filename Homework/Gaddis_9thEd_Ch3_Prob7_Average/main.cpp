/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2024, 2:31 pm
 * Purpose:  Calculates average test score 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float test1, //Creates and holds the test scores that will be inputted
        test2,
        test3,
        test4,
        test5;
    float ave; //Average test score
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>test1; //Ask user for input 5 times
    cin>>test2;
    cin>>test3;
    cin>>test4;
    cin>>test5;
    
    ave = (test1 + test2 + test3 + test4 + test5)/ 5; //Add all test scores and divide them by 5

    cout<<"The average = "<< fixed << setprecision(1) << ave; //Fixed point notation with a precision of 1 decimal point for the output
    //Display the outputs

    //Exit stage right or left!
    return 0;
}