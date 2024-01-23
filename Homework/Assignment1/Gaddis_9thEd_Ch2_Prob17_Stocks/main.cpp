/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:31 PM
 * Purpose: 
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
    int shrs; //Amount of shares bought
    float stkprc, //Price of individual stocks
            cmisn; //%2 commission 
     
            
    float ttlStk, //The amount paid for the stock alone(without the commission)
            cmisnTl, //The amount of the commission
            fnlCst; //The total amount paid(for the stock plus the commission)
    
    //Initialize all variables
    shrs = 750; //Amount of shares
    stkprc = 35.00; //Cost of each
    cmisn = .02; //Commission cost
    
    //Process or Map solution
    ttlStk = shrs * stkprc; //Amount of shares x cost of each to find Total spent
    cmisnTl = ttlStk * cmisn; //Total paid for shares x %2 for commission
    fnlCst = ttlStk - cmisnTl; //Subtract Total spent by amount of commission to find
                               //total money spent
    
    //Display the output
    std::cout<<"Amount paid for stocks alone: $"<<ttlStk<<endl;
    std::cout<<"Commission amount: $"<<cmisnTl<<endl;
    cout<<"Total amount paid including commission amount: $"<<fnlCst<<endl;
    
    //Exit the program
    return 0;
}

