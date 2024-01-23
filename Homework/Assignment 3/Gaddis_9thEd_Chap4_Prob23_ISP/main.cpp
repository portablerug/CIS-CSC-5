/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Calculates Internet Service Provider bill
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
    float hrs,bill;
    
    char pckg;
    //Initialize or input i.e. set variable values
    //Display outputs
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    
    cin>>pckg>>hrs;
    
    //Map inputs -> outputs
    
    //Output for package A
    if (pckg=='A'){
        bill = hrs<=10 ? hrs*0.995:
                hrs>10 ? 9.95 + (hrs-10)*2:0;
    }
    
    //Output for pacahe B
    if (pckg=='B'){
        bill = hrs<=20 ? hrs*0.7475:
                hrs>20 ? 14.95 + (hrs-20)*1:0;
    }
    
    //Output fpr package C 
    if (pckg =='C'){
        bill = hrs<=744? 19.95:0;
    }
    
    cout<<setprecision(2)<<fixed;
    cout<<"Bill = $"<<setw(6)<<bill;
    
    //Display the outputs

    
    //Exit stage right or left!
    return 0;
}