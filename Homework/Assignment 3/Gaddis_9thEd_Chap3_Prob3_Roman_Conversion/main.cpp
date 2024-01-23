/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Roman numeral conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    unsigned char n1, //Number of 1'unsigned
                    n10, //Number of 10's 
                    n100, //Number of 100's 
                    n1000; //Number of 1000's 
    unsigned short x; //4 Digit number between 1000 - 3000
    string msg; //Message
    
                    
    //Initialize or input i.e. set variable values
    cin>>x;
    msg="";
    
    //Map inputs -> outputs
    if (x<1000 || x >3000){
        msg =" is Out of Range!";
    }else{
        //Strip off each digit
        n1    =(x)%10;             
        n10   =(x/10)%10;     
        n100  =(x/100)%10;     
        n1000 =(x/1000); //Does not need to be modded by 10 
        
        //Code for outputting Roman numberals in the 1000's (Switch)
        switch (n1000){
            case 3:msg+="M";
            case 2:msg+="M";
            case 1:msg+="M";
        };
        //Code for outputting Roman Numberals in the 100's (Ternary)
        msg += n100==9? "CM":
               n100==8? "DCCC":
               n100==7? "DCC":
               n100==6? "DC":
               n100==5? "D":
               n100==4? "CD": //C minus D = 100 - 500 = 400
               n100==3? "CCC": //100 + 100 + 100 = 300
               n100==2? "CC"://C 100 + 100 = 200
               n100==1? "C": ""; //C = 100
        
        //Code for outputting Roman Numerals in 10's (Independent)
        if(n10==9)msg+="XC";
        if(n10==8)msg+="LXXX";
        if(n10==7)msg+="LXX";
        if(n10==6)msg+="LX";
        if(n10==5)msg+="L";
        if(n10==4)msg+="XL";
        if(n10==3)msg+="XXX";
        if(n10==2)msg+="XX";
        if(n10==1)msg+="X";
        
    
        //Code for outputting Roman Numberals in 1's (Dependent)
        if(n10==9)msg+="IX";
        else if(n10==8)msg+="VIII";
        else if(n10==7)msg+="VII";
        else if(n10==6)msg+="VI";
        else if(n10==5)msg+="V";
        else if(n10==4)msg+="IV";
        else if(n10==3)msg+="III";
        else if(n10==2)msg+="II";
        else if(n10==1)msg+="I";
        
        //Add message wording
        msg = " is equal to " + msg;
        
        
    }
    
    
    //Display the outputs
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    
    
    cout<< x << msg;
    
    //Exit stage right or left!
    return 0;
}