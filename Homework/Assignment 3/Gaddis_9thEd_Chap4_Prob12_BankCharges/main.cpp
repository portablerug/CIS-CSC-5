/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Calculates total charges from a bank
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
    int balnc, //Asks the user for their beginning balance
        nmChks; //Number of checks
        
    float fnBlnc, //Users final balance
            chkFee, //Check fee that will be applied
            mnFee, //Monthly fee
            lwBlnc, //Low Balance (warning sign)
            nwBlnc; //New Balance
    //Initialize or input i.e. set variable values
    cin>>balnc;
    cin>>nmChks;
    
    chkFee = 0;
    mnFee = 10;
 
    //Map inputs -> output
    
    //Calculate the total check fees
    (nmChks < 20) ? chkFee = nmChks * .10: 
    (nmChks < 40) ? chkFee = nmChks * .08:
    (nmChks < 60) ? chkFee = nmChks * .06: chkFee = nmChks * .04;
  
    //Low Balance
    if(balnc < 400){
        lwBlnc = 15;
    }else {
        lwBlnc = 0;
    }
    
    //equation for the new balance
    nwBlnc = balnc - lwBlnc - chkFee - mnFee;

    //Display the outputs
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    
    cout<< fixed << setprecision(2);
    cout<<"Balance     $"<< setw(9) << static_cast<float>(balnc) <<endl;
    cout<<"Check Fee   $"<< setw(9) << chkFee << endl;
    cout<<"Monthly Fee $"<< setw(9) << mnFee <<endl;
    cout<<"Low Balance $"<< setw(9) << static_cast<float>(lwBlnc)<<endl;
    cout<<"New Balance $"<< setw(9) << static_cast<float>(nwBlnc);

    //Exit stage right or left!
    return 0;
}