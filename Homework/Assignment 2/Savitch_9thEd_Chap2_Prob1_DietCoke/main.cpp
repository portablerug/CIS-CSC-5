/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2019, 10:03 AM
 * Purpose:  Calculates amount of diet coke cans a person can drink before fatality
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float convs = 453.592; //Grams divided by pounds
const float msklMs = 5;  //7 grams
const float mssSp = 350; //350 grams
const float cSwt = 0.001; // 1/10 th artificial sweetener added to diet coke cans
const float msMass = 35; //35 grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float dieWgh; //Dream weight for dieter
    int numCans; //Number of cans before fatality

    //Initialize or input i.e. set variable values
    cin>>dieWgh;  //Takes users desired dream weight
   
    //Map inputs -> outputs
    numCans = (dieWgh*convs*msklMs)/(mssSp*cSwt*msMass); //Calculates the number of cans the dieter
                                                        //can drink before he dies. Use all variables
    
    //Display the outputs
    cout<< "Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<< "Input the desired dieters weight in lbs."<<endl;
    cin>>dieWgh;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<< numCans <<" cans";
    
    

    //Exit stage right or left!
    return 0;
}