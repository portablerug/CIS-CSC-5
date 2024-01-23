/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Book club points
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
    int numBks, //Number of books user bought
            numPts; //Number of points user gets
            
    //Initialize or input i.e. set variable values
    cin >> numBks; //Number of books user bought
    numPts = 0; //Assign number of points to zero
    
    //Map inputs -> outputs
    
    //If else if statement that adds number of points to persons points based on numBks inputted
     if (numBks == 1){
         numPts += 5;
     }
    else if (numBks == 2){
        numPts += 15;
    }
    else if (numBks == 3){
        numPts += 30;
    }
    else if (numBks >= 4){
        numPts += 60;
    }
    else if (numBks <= 0){
        numPts += 0;
    }
    

    //Display the outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    
    cout<<"Books purchased = "<< setw(2) << numBks <<endl;
    cout<<"Points earned   = "<< setw(2) << numPts;

    //Exit stage right or left!
    return 0;
}