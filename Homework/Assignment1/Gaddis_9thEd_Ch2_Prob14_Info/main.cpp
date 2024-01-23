/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 4, 2024, 12:55 AM
 * Purpose: Displays pieces of information on separate lines
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <string> //Required for the string class
using namespace std;

//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
     const char name [] = "Miguel Juarez", //Literal string
              addy [] = "1234 Bay Ave, Atlanta, GA, 89291", //Literal string 
              num [] = "951-427-7713"; //Literal String
    string major; 
    
    //Initialize all variables
   
    major = "Computer Science"; //Literal string 
    //Display the output
    cout<<"My name is "<<name<<endl;
    cout<<"My home address is "<<addy<<endl;
    cout<<"My phone number is "<<num<<endl;
    cout<<"I am a "<<major<<" major at UCSC and RCC."<<endl;
    
    //Exit the program
    return 0;
}

