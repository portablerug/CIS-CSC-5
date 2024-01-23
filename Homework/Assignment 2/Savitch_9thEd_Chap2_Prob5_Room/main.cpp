/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2024, 5:58 PM
 * Purpose: Calculate room occupancy and limits
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
    int maxPpl, //Maximum amount of people allowed in the room
        numPpl, //The number of people that are in the room
        pplLev, //The number of people that need to level to avoid fire violation
        pplAdd; //The number of people that can be added to the room
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>> maxPpl >> numPpl;
    
    pplLev = numPpl - maxPpl; //Calculates number of people that need to leave by
                              //subtracting number of people by number allowed
    
    pplAdd = maxPpl - numPpl; //Calculates number of people allowed in by 
                              //subtracting max people by people in the room
    
    //If statement that scans to see which one of the two cases is true to output
    if (numPpl <= maxPpl){
        cout<<"Meeting can be held."<< endl;
        cout<<"Increase number of people by "<< pplAdd << " will be allowed without violation.";
    }else {
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<< pplLev <<" to avoid fire violation.";
    }

    //Exit stage right or left!
    return 0;
}