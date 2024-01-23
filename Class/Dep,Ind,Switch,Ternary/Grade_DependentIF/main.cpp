/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 11th, 2024, 12:33 PM
 * Purpose: Grade
 */

#include <iostream> //Input - Output Library
#include <cstdlib> //Random Library
#include <iomanip> //
#include <ctime>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    char grade; //Letter grade
    char score; //0 - 100
    
    //Initialize all variables
    score = rand()%51 + 50; //Score between 0 and 100
    
    //Process or Map solution
    
    //Ternary Operator inside of 4 other ternary operators
    if(score>= 90) grade = 'A';
    else if(score>= 80) grade = 'B';
    else if(score>=70) grade = 'C';
    else if (score>=70)grade = 'D';
    else               grade = 'F';
    
    //Display the output
    cout<<"Score = "<<static_cast<int>(score)
            <<" gives Grade = "<<grade<<endl;
            
         
    //Exit the program
    return 0;
}

