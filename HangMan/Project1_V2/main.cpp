/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 23, 2024, 11:52 PM
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
    ofstream wrdBnk("usr_wrdbank.txt");   //Create text file to save words
    string outWrd;  //String for outputting from file
    int lives;  //Users lives
    
    char usrLtr;  //User Letter
    //Initialize Variables
    lives = 5;  //5 Lives
    
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
    cout<<"--------------------------------"<<endl;
    
    //Write to the file & output from file
    wrdBnk << usrWrd;
    ifstream rdWrds("usr_wrdbnk.txt");
    
    while (getline (rdWrds, outWrd)) {
        cout << outWrd;
    }
    cout<<"Current word:"<<endl;
    cout<<"Guess a letter:";
    cin>> usrLtr;
    //Decide if the game keeps going
    
    while (!usrWrd.empty() && lives > 0) {
        std::cout << "You have " << lives << " lives left and you have used these letters: ";
        
        //Decrement lives
        --lives;
    }
    
    if (lives == 0) {
        cout<< "Game over! You ran out of lives. The word was: "<< usrWrd <<endl;
    }
    
    //Close file
    wrdBnk.close();
    //Exit the program
    return 0;
}

