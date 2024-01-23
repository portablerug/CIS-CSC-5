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
    
    switch (score/10){
        case 10:
        case  9: grade = 'A';break;
        case  8: grade = 'B';break;
        case  7: grade = 'C';break;
        case  6: grade = 'D';break;
        default: grade = 'F';
    }
    
    //Display the output
    cout<<"Score = "<<static_cast<int>(score)
            <<" gives Grade = "<<grade<<endl;
            
         
    //Exit the program
    return 0;
}

