/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Name Sorting alphabetically
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, //Will hold the user names in a string 
            name2,
            name3;

    string first, //Output the users name in order from first to last
            second,
            third;
    
    //Initialize or input i.e. set variable values
     
    cin>>name1; //User inputs
    cin>>name2;
    cin>>name3;
    
    //If else if statements that compare the names in string values and assigns based on order
    if (name1 < name2 && name1 < name3){
        first = name1;
        if(name2 < name3){
            second = name2;
            third = name3;
        }else {
            third = name2;
            second = name3;
        }
    }else if (name2 < name1 && name2 < name3){
        first = name2;
         if(name1 < name3){
            second = name1;
            third = name3;
        }else {
            third = name1;
            second = name3;
        }
    }else if(name3 < name2 && name3 < name1){
        first = name3;
         if(name2 < name1){
            second = name2;
            third = name1;
        }else{
            third = name2;
            second = name1;
        }
        
    }
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
   
    
    cout<<first << endl;
    cout<<second<< endl;
    cout<<third;
    
    //Exit stage right or left!
    return 0;
}