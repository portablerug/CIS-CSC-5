/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2024, 1:20 PM
 * Purpose: Calculates minimum amount of insurance user should buy for the property
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float insure, //Amount suggested for insurance 
        repCost, //Replacement cost
        cstInsr; //Cost to insure 
        
    //Initialize or input i.e. set variable values
    insure = .8; //80% of the amount it would cost to replace the structure
    //Map inputs -> outputs
    cstInsr = repCost * insure; //Multiply the replacement cost by %80 to find what the insurance should be
    
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>repCost; //Reads the users replacement amount
    
    cstInsr = repCost * insure; //Multiplies replacement cost by %80 to find insurance 
    
    cout<<"You need $"<<cstInsr<<" of insurance.";
    

    //Exit stage right or left!
    return 0;
}