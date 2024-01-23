/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 10, 2024 5:20 PM
 * Purpose:  Calculates users new compensation amount
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
    int pvAnSal; //Previous Annual Salary
        
        
    float pcInc, //Pay increase
            nwAnSal, //New Annual Salary
            nwMtSal, //New Monthly Salary
            retoPay; //Retroactive Pay
    
    
    //Initialize or input i.e. set variable values
    pcInc = 0.076; //Pay increase
    //Map inputs -> outputs
    
    //Display the outputs
    cout<< fixed << setprecision(2);
    cout<<"Input previous annual salary."<<endl;
    cin>>pvAnSal;
    
    nwAnSal = (pvAnSal * pcInc) + pvAnSal; //Multiply previous annual salary by new compensation
                                           //and add previous annual salary for new salary amount
    nwMtSal = nwAnSal/12; //Divide new annual salary by 12 for monthly amount
    retoPay = (pvAnSal * pcInc)/2; //Divide by 2 for period of compensation (6 months)
    
    cout<<"Retroactive pay    = $"<< setw(7) << retoPay <<endl;
    cout<<"New annual salary  = $"<< setw(7) <<nwAnSal<<endl;
    cout<<"New monthly salary = $"<< setw(7) << nwMtSal;
    

    //Exit stage right or left!
    return 0;
}