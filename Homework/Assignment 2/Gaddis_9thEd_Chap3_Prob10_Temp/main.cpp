/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2024, 2:40 PM
 * Purpose:  Convert Fahrenheit to Celsius 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float usrFah, //Holds User Fahrenheit temperature
            cels; //Celsius
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cels = (usrFah - 32) * 5/9; //Global Conversion
    
    //Display the outputs
    cout<< fixed << setprecision(1);
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>usrFah;
    
    cels = (usrFah - 32) * 5/9;
    
    cout<< usrFah << " Degrees Fahrenheit = "<< cels <<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}