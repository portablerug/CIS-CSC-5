/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2024, 7:00 PM
 * Purpose: Sum positive, negative and all numbers.
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
    short int inpNum, //Numbers inputted by the user
            negSum, //Sum of all negative numbers
            posSum, //Sum of all positive numbers
            ttlSum; //Sum of all numbers, positive, negative
    //Initialize or input i.e. set variable values
    posSum = negSum = 0; //Set the sums equal to 0 
    
    //Map inputs -> outputs
    ttlSum = posSum + negSum; //Use this to figure out the total for all numbers
                              //the user inputted 
    
    
    //Several ternary operators to check if each of the 10 inputted numbers
    //are either >0 or<0
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    cin>>inpNum;
    posSum+=inpNum>0 ? inpNum : 0;
    negSum+=inpNum<0 ? inpNum : 0;
    
    
    //Display the outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>> inpNum;
    

   cout<<"Negative sum = "<< setw(3) <<negSum<< endl;
   cout<<"Positive sum = "<< setw(3) <<posSum <<endl;
   cout<<"Total sum    = "<< setw(3) <<ttlSum;

    //Exit stage right or left!
    return 0;
}