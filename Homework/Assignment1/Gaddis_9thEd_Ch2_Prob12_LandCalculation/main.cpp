/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 10:34 PM
 * Purpose: 
 */

#include <iostream>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    
    //Declare all variables
    int acre, //Size of a  single acre of land in square feet
            tlAcr; //Total square feet of land
    
    int nmAcrs; //Number of Acres in total square feet of land 
    
    //Initialize all variables
    acre = 43560; //Square feet
    tlAcr= 391876; //Square feet
    //Process or Map solution
    nmAcrs = tlAcr/acre; //One acre divided by 
    
    //Display the output
    std::cout<<"The number of acres in "<<tlAcr<<"ft^2, is "<<nmAcrs<<" acres."<<endl;
    //Exit the program
    return 0;
}

