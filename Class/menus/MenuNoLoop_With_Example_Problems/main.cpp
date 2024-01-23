/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 16, 2024, 1:08 PM
 * Purpose: Menu 
 */

#include <iostream>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Declare all variables
    char nMnuItm;
    unsigned short probNum;
    
    //Initialize all variables
    nMnuItm = 3;
    
    //Display Menu 
    cout<<"This is an example Menu Program"<<endl;
    cout<<"Input the problem number to run"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    
    cin>>probNum;
    
    //Execute the Menu/Problem Number 
    
    switch(probNum){
        case 1: cout<<"Place solution to Problem 1 here"<<endl;break;
        case 2: cout<<"Place solution to Problem 2 here"<<endl;break;
        case 3: 
            //Declare all variables
            short int x, 
                    sumPos, 
                    sumNeg;

            char nTimes;

            //Initialize all variables
            sumPos=sumNeg=0;
            nTimes = 10;

            //Process or Map solution

            //starts off at 1 prefix
            cout<<"Input 10 numbers to add"<<endl;

            for (int counter = 1; counter <= nTimes; counter++){
                cin>>x;
                sumPos+=x>0?x:0;
                sumNeg+=x<0?x:0;
            }
            //Display the output
            cout<<"Input 10 numbers to add"<<endl;
            cout<<"Positive sum = "<< setw(3)<<sumPos<<endl;
            cout<<"Negative sum = "<< setw(3)<<sumNeg<<endl;
            cout<<"Total sum    = "<< setw(3)<<sumNeg+sumPos;
            
            break;
  
        default: cout<<"Exiting the Menu"<<endl;
    }
    
    
    //Display the output
    
    //Exit the program
    return 0;
}

