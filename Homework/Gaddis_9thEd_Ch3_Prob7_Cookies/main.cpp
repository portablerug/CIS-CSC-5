/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 8, 2024, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int amtAte, //Amount of cookies ate by user
        ttlCals; //Total calories consumed by the user
        
    //Initialize or input i.e. set variable values
   
    //Map inputs -> outputs
    
    //Display the outputs
    cout<< "Calorie Counter" << endl;
    cout<< "How many cookies did you eat?"<< endl;
    cin>>amtAte;
    ttlCals = (amtAte * 75); //Multiply the amount of cookies ate by calories per cookie
    
    cout<< "You consumed "<< ttlCals <<" calories";
    //Exit stage right or left!
    return 0;
}