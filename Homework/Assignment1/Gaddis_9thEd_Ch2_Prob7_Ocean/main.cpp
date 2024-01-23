/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:31 PM
 * Purpose: Assumes the ocean's level after 5, 7 and 10 years
 */

#include <iostream>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float oclvl, //Amount of millimeters that ocean level rises per year
            aft5yrs, //Ocean level after 5 years
            aft7yrs, //Ocean level after 7 years
            aft10yrs; //Ocean level after 10 years
    
    int fvyrs, //Five years
            svyrs, //Seven years
            tnyrs; //Ten years
    //Initialize all variables
    oclvl = 1.5; //Ocean level rising in millimeters per year
    fvyrs = 5; //years
    svyrs = 7; //years
    tnyrs = 10; //years
    //Process or Map solution
    aft5yrs = fvyrs * oclvl; //Ocean level after 5 years
    aft7yrs = svyrs * oclvl; //Ocean level after 7 years
    aft10yrs = tnyrs * oclvl; //Ocean level after 10 years
           
    //Display the output
    cout<<"After 5 years, the ocean level will be "<<aft5yrs<<" millimeters higher."<<endl;
    cout<<"After 7 years, the ocean level will be "<<aft7yrs<<" millimeters higher."<<endl;
    cout<<"After 10 years, the ocean level will be "<<aft10yrs<<" millimeters higher."<<endl;

    //Exit the program
    return 0;
}

