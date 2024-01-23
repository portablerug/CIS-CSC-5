/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 7, 2024, 1:42 PM
 * Purpose:  Displays sin,cos, and tang of the degrees inputted
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    float sine, //Output for sine
            cosine, //Output for cosine
            tangent; //Output for tangent
    int num;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    sine = sin(num * 3.141592653/180); //multiply the number by pi & divide by 180 for accuracy
    cosine = cos(num * 3.141592653/180);
    tangent = tan(num * 3.141592653/180);
    //Display the outputs
 
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>num;
 
    sine = sin(num * 3.141592653/180);
    cosine = cos(num * 3.141592653/180);
    tangent = tan(num * 3.141592653/180);
    
    cout<<"sin("<<num<<") = "<< fixed << setprecision(4) <<sine<<endl;
    cout<<"cos("<<num<<") = "<< fixed << setprecision(4) <<cosine<<endl;
    cout<<"tan("<<num<<") = "<< fixed << setprecision(4) <<tangent;
    //Exit stage right or left!
    return 0;
}