/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 4, 2024, 6:10 PM
 * Purpose: Calculates distance car can travel on one tank 
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
    int gasTnk; //Gallon of gas tank
    float avDtTn; //Average miles per gallon driven to Town
    float avgDtHw; //Average miles per gallon driven on the Highway
    float twnTnk, hwTnk; //Distance the car can travel on one tank of gas
                  //when driven in town and on the highway
    
    //Initialize all variables
    avDtTn = 23.5; //Number of miles driven per gallon into Town
    avgDtHw = 28.9; //Number of miles driven per gallon on the Highway
    gasTnk = 20; //Amount of gallons of gas the car holds

    //Process or Map solution
    twnTnk = gasTnk * avDtTn; //Distance = Number of Gallons * Average MPG
    hwTnk = gasTnk * avgDtHw; // ^^^^^
    
    //Display the output
    cout<<"Distance traveled driving in town:  "<<twnTnk<<endl;
    cout<<"Distance traveled when driving on the highway: "<<hwTnk<<endl;
    //Exit the program
    return 0;
}

