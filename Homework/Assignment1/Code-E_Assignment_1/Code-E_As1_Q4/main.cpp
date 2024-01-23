/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:31 PM
 * Purpose: Template for Projects
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>  //Required for stew
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    int num1,
        num2,
        num3,
        num4;
 
    //Initialize or input data here
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;

    //Format and display outputs here
    cout<<setw(9)<<num1<<setw(10)<<fixed<< setprecision(1)<<static_cast<double>(num1)<< setw(10) << setprecision(2)<<static_cast<double>(num1)<<endl;
    cout<<setw(9)<< num2 << setw(10)<< fixed << setprecision(1)<<static_cast<double>(num2) <<setw(10)<< setprecision(2)<<static_cast<double>(num2)<< endl;
    cout<<setw(9)<< num3 << setw(10)<< fixed << setprecision(1)<<static_cast<double>(num3)<<setw(10)<< setprecision(2)<<static_cast<double>(num3)<< endl;
    cout<<setw(9)<< num4 << setw(10)<< fixed << setprecision(1)<<static_cast<double>(num4) <<setw(10)<< setprecision(2)<<static_cast<double>(num4);
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}