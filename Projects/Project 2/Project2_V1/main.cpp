/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on February 7, 2024, 10:40 PM
 * Purpose: HangMan Project 2
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
void choosingword(int, string&);
void playerName(string);
void gameplay(string&, int, int&, char);
void endgame(int, string&, string&, std::ofstream);

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    srand (static_cast<int>(time(0)));
    
    //Chose Word bounds
    int chWrd = (rand()%10) + 1;
   
    //Declare Variables
    string usrNm;  //Player name
    string outWrd;  //String for outputting from file
    int lives;  //Users lives
    
    char usrLtr;  //User Letter
    string gsWrd;   //Guess Word
    char agn;   //Play again
    
    //Declare Variables
    lives = 5;
    
    do{
        //Display the Rules and intro
        choosingword(chWrd, gsWrd);

        //Read name to the file
        ifstream rdWrds("nameNpoints.txt");
        
        //Name to keep score
        cout<<"Enter your name: ";
        cin>>usrNm;
        //Check if user inputs a name
        ofstream wrdBnk("nameNpoints.txt");   //Declare and open the file stream object for writing
        while (usrNm.empty()){
            cout<<"Invalid, please input your name again: ";
            cin>>usrNm;
        }
        //Write to the file
        wrdBnk << usrNm;
        wrdBnk.close();
        
        //Print out word and dashes for word characters & game play
        gameplay(gsWrd, chWrd, lives, usrLtr);

        //Losing Condition
        int pts = 0;    //Hold the users points
        if (lives == 0) {
            cout<< "Game over! You ran out of lives. The word was: "<< gsWrd <<endl;
            pts += 0;
            
            while (rdWrds >> usrNm) {
                cout << usrNm << " has won no points."<< endl;
            }

            //Update file
            wrdBnk << usrNm << " " << pts << setw(2)<< "points."<<endl;
        }

        //If the player wins, their points are added to the file
        while (rdWrds >> usrNm) {
            cout << usrNm << setw(2)<< "has won " << WIN_POINTS <<" !" << endl;
            pts += WIN_POINTS;         
        }
        //Update the file 
        wrdBnk << usrNm << " " << pts << " points."<<endl;

        //Close file
        wrdBnk.close();
        
        
        
        
        
        //Close the file stream object
        wrdBnk.close();

        //Play again?
        cout<<"------------------------"<<endl;
        cout<<"Do you want to play again? (y/n)";
        cin>>agn;
        
    }while (agn == 'y' || agn == 'Y');
    
    
    //Exit the program
    return 0;
}

void choosingword(int chWrd,string& gsWrd){
//Display the Rules and intro
        cout<<"Welcome to HangMan!"<<endl;
        cout<<"Rules:"<<endl;
        cout<<"1. Do not repeat the same letter"<<endl;
        cout<<"2. Solve the mystery word"<<endl;
        cout<<"3. Have fun!"<<endl;
        cout<<"--------------------------------"<<endl;

        //Choose random number from 1 to 10 & validate
        cout<<"Choose a level from 1 - 10:";
        cin>>chWrd;
        
        //Set word to string. (Note: Make functions for different genres of words)
        switch(chWrd){
                case 1: gsWrd = "CAR"; break;
                case 2: gsWrd = "TREE"; break;
                case 3: gsWrd = "LINUX"; break;
                case 4: gsWrd = "MONKEY"; break;
                case 5: gsWrd = "COMPUTER"; break;
                case 6: gsWrd = "WEREWOLF"; break;
                case 7: gsWrd = "INFLATION"; break;
                case 8: gsWrd = "AUTOMOBILE"; break;
                case 9: gsWrd = "RELATIONSHIP"; break;
                case 10: gsWrd = "QUINTESSENTIAL"; break;
            default: while(chWrd > 10 || chWrd <= 0){
                        cout<<"Invalid number, try again:" <<setw(2);
                        cin>>chWrd;
                    }
        }
}

void gameplay(string& gsWrd, int chWrd, int& lives, char usrLtr) {
    //2D array to store the state of the word
    char wrdSt[gsWrd.length()];
    for (int i = 0; i < gsWrd.length(); ++i) {
        wrdSt[i] = '-';
    }

    cout << "Current word: ";
    //Display current state of word
    for (int i = 0; i < gsWrd.length(); i++) {
        cout << wrdSt[i] << " ";
    }
    cout << endl;

    //Start Guessing
    if (chWrd >= 1 && chWrd <= 10) {
        //Checks players lives 
        while (lives > 0) {
            cout << "Guess a letter: ";
            cin >> usrLtr;
            usrLtr = toupper(usrLtr); //Convert user letter to capital

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i = 0; i < gsWrd.length(); i++) {
                // Access a character inside the given string
                // This case will be Word to Guess
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    wrdSt[i] = usrLtr; // Update the state of the guessed word
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                cout << "Correct!" << endl;
            } else {
                // Lives will decrement if user chooses the wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: " << lives << endl;
            }

            // Display word with new letters in it
            cout << "Current word: ";
            for (int i = 0; i < gsWrd.length(); i++) {
                cout << wrdSt[i] << " ";
            }
            cout << endl;

            // Check if the word has been completely guessed
            bool wordGuessed = true;
            for (int i = 0; i < gsWrd.length(); i++) {
                if (wrdSt[i] == '-') {
                    wordGuessed = false;
                }
            }
            if (wordGuessed) {
                cout << "Congratulations! You guessed the word!" << endl;
            }
        }
    }
    // End of word guessing
}

 