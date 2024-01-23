/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 3, 2024, 1:27 PM
 * Purpose: Calculates the amount of paint cans needed to paint a fence
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
    unsigned short pntCov;
    unsigned char fnHt, fnLnth;
    short nCans;
    
    //Initialize all variables
    pntCov = 340; //340 square feet^2/gallon
    fnHt = 6; //6 feet
    fnLnth = 100; //100 feet
    
    //Process or Map solution
    nCans=4*fnHt*fnLnth/pntCov+1; //+1 for ceiling function round up
    
    //Display the output
    cout<<"Paint Coverage = "<<pntCov<<" square feet/gallon"<<endl;
    cout<<"Fence Height   = "<<static_cast<int>(fnHt)<<" feet"<<endl;
    cout<<"Fence Length   = "<<static_cast<int>(fnLnth)<<" feet"<<endl;
    cout<<"Number of Cans of Paint = "<<nCans<< " cans"<<endl;
    
    //Exit the program
    return 0;
}

