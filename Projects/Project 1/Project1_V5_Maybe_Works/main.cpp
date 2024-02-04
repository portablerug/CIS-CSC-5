/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 28, 2024, 9:35 PM
 * Purpose: HangMan
 */

#include <iostream> //Input output Library
#include <iomanip>  //Format Library
#include <fstream> //Read Write to files
#include <ctime>    //Random Number
#include <cstdlib>  //Random Number
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Local Constant
const int WIN_POINTS = 10;  //Points won if guessed correctly
//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    srand (static_cast<int>(time(0)));
    
    //Declare Variables
    string usrNm;  //Player name
    string outWrd;  //String for outputting from file
    int lives;  //Users lives
    
    char usrLtr;  //User Letter
    string gsWrd;   //Guess Word
    
    //Declare Variables
    lives = 5;
    
    //Display the Rules and intro
    cout<<"Welcome to HangMan!"<<endl;
    cout<<"Rules:"<<endl;
    cout<<"1. Do not repeat the same letter"<<endl;
    cout<<"2. Solve the mystery word"<<endl;
    cout<<"3. Have fun!"<<endl;
    cout<<"--------------------------------"<<endl;
    
    //Choose random number from 1 to 10 
    int chWrd = (rand()%10) + 1;
    cout<<"Choose a level from 1 - 10:";
    cin>>chWrd;
    
    //Set word to string. (Note: Make functions for different genres of words)
    switch(chWrd){
            case 1: gsWrd = "CAR"; break;
            case 2: gsWrd = "TREE"; break;
            case 3: gsWrd = "MONKEY"; break;
            case 4: gsWrd = "LINUX"; break;
            case 5: gsWrd = "COMPUTER"; break;
            case 6: gsWrd = "WEREWOLF"; break;
            case 7: gsWrd = "INFLATION"; break;
            case 8: gsWrd = "AUTOMOBILE"; break;
            case 9: gsWrd = "RELATIONSHIP"; break;
            case 10: gsWrd = "QUINTESSENTIAL"; break;
        default: while(chWrd > 10){
                    cout<<"Invalid number, try again: ";
                    cin>>chWrd;
                }
    }

    //Name to keep score
    cout<<"Enter your name: ";
    cin>>usrNm;
    //Check if user inputs a name
    ofstream wrdBnk("nameNpoints.txt");   //Create text file to save words
    while (usrNm.empty()){
        cout<<"Invalid, please input your name again: ";
        cin>>usrNm;
    }
    //Write to the file
    wrdBnk << usrNm;
    wrdBnk.close();
    
    //Print out word and dashes for word characters
    cout<<"Current word: ";
    for (int i=0; i<gsWrd.length(); i++){
        cout<<"- ";
    }
    cout<<endl;
    
    //Start of Word Solving 
    if (chWrd == 1) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    if (chWrd == 2) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 3) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 4) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 5) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    if (chWrd == 6) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 7) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 8) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 9) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    if (chWrd == 10) {
        //Check if the player still has lives to play
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr);   //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i=1; i<gsWrd.length(); i++){
                //Access a character inside the given string
                //This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    break;
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                gsWrd += usrLtr;   //Correct Letter chosen
            } else {
                //Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: "<< lives << endl;
            }
            
            // Display word with new letters in it (how?, arrays?)
            cout << endl;
        }
    }
    
    //End 
    
    //Read in from the file
    ifstream rdWrds("nameNpoints.txt");
    //Losing Condition
    if (lives == 0) {
        cout<< "Game over! You ran out of lives. The word was: "<< gsWrd <<endl;
        while (rdWrds >> usrNm) {
            cout << usrNm << " has won no points."<< endl;
        }
        //Update file
        wrdBnk << usrNm << " " << WIN_POINTS << " points."<<endl;
    }
 
    //If the player wins, their points are added to the file
    while (rdWrds >> usrNm) {
        cout << usrNm << " has won " << WIN_POINTS << endl;
    }
    //Update the file 
    wrdBnk << usrNm << " " << WIN_POINTS << " points."<<endl;
    
    
    
    
    
    //Close file
    wrdBnk.close();
    //Exit the program
    return 0;
}

