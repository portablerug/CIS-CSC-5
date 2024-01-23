/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  test certain signs to see if both are compatible
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Varstringiables
    string sgn1, 
            sgn2;
            
    string elmnt1, 
            elmnt2, 
            fire,
            earth,
            air,
            water;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>sgn1>>sgn2;
    
    elmnt1 = sgn1 =="Aries" ? "Fire":
                sgn1 =="Leo" ?"Fire":
                sgn1 =="Sagittarius" ? "Fire":
                sgn1 =="Taurus"? "Earth":
                sgn1 =="Virgo"? "Earth":
                sgn1 =="Capricorn"? "Earth":
                sgn1 =="Gemini"? "Air":
                sgn1 =="Libra"? "Air":
                sgn1 =="Aquarius"? "Air":
                sgn1 =="Cancer"? "Water":
                sgn1 =="Scorpio"? "Water":
                sgn1 =="Pisces"? "Water":0;
        
    elmnt2 = sgn2 =="Aries" ? "Fire":
                sgn2 =="Leo" ?"Fire":
                sgn2 =="Sagittarius" ? "Fire":
                sgn2 =="Taurus"? "Earth":
                sgn2 =="Virgo"? "Earth":
                sgn2 =="Capricorn"? "Earth":
                sgn2 =="Gemini"? "Air":
                sgn2 =="Libra"? "Air":
                sgn2 =="Aquarius"? "Air":
                sgn2 =="Cancer"? "Water":
                sgn2 =="Scorpio"? "Water":
                sgn2 =="Pisces"? "Water":0;
                
    //Map inputs -> outputs
    if(elmnt1==elmnt2)
    cout<<sgn1<<" and "<<sgn2<<" are compatible "<<elmnt1<<" signs.";
    else if(elmnt1!=elmnt2)
    cout<<sgn1<<" and "<<sgn2<<" are not compatible signs.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}