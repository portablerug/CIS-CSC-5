/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 23, 2024, 6:31 PM
 * Purpose: HangMan
 */

#include <iostream> //Input output Library
#include <iomanip>  //Format Library
#include <fstream> //Read Write to files
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare Variables
    string usrWrd;  //Users word
    fstream out;    //Write words to file
    int lives;  //Users lives
    
    //Display the Rules and intro
    cout<<"Welcome to HangMan!"<<endl;
    cout<<"Rules:"<<endl;
    cout<<"1. Do not repeat the same letter"<<endl;
    cout<<"2. Solve the mystery word"<<endl;
    cout<<"3. Have fun!"<<endl;
    cout<<"--------------------------------"<<endl;
 
    //Game mode and word selection
    cout<<"Input a word to guess"<<endl;
    cin>>usrWrd;
    
    cout<<usrWrd<<endl;
    
    //Decide if the game keeps going
    
    //Display the Rules and intro
   
    //Exit the program
    return 0;
}

