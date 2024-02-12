/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on Feburary 10, 2024, 10:51 PM
 * Purpose: HangMan Project 2
 */

#include <iostream> //Input output Library
#include <iomanip>  //Format Library
#include <fstream> //Read Write to files
#include <ctime>    //Random Number
#include <cstdlib>  //Random Number
#include <vector>

using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Local Constant
const int WIN_POINTS = 10;  //Points won if guessed correctly
const int MAX_GUESSES = 26; //Can only guess all letters

//Function Prototypes
void choosingword(int&, string&, string[], vector<int>&);
void gameplay(string&, int, int&, char, char[], int&, vector<int>&);
bool againORexit();
void selSort(string[], vector<int>&);

// Program Execution begins here
int main(int argc, char** argv) {
    // Set a random seed
    srand(static_cast<int>(time(0)));

    // Chose Word bounds
    int chWrd = (rand() % 10) + 1;

    // Declare Variables
    string usrNm;                   // Player name
    string outWrd;                  // String for outputting from file
    int lives;                      // Users lives
    string usrWrds[MAX_GUESSES];    // Array to store guessed words
    vector<int> scores;             // Vector to store corresponding scores
    char usrLtr;                    // User Letter
    string gsWrd;                   // Guess Word
    char agn;                       // Play again

    lives = 5;

    // Declare array to store guessed letters
    char ltrsGs[MAX_GUESSES];
    int numGs = 0; // Number of letters already guesses

    // Open file
    ofstream wrdBnk("nameNpoints.txt", ios::app);

    do {
        // Reset numGs before starting a new game
        numGs = 0;

        // Display the Rules and intro
        choosingword(chWrd, gsWrd, usrWrds, scores);

        // Read name to the file
        ifstream rdWrds("nameNpoints.txt");

        // Name to keep score
        cout << "Enter your name: ";
        cin >> usrNm;

        // Check if user inputs a name
        ofstream wrdBnk("nameNpoints.txt"); //wrdBnk is declared for writing
        while (usrNm.empty()) {
            cout << "Invalid, please input your name again: ";
            cin >> usrNm;
        }
        // Write to the file
        wrdBnk << usrNm;
        wrdBnk.close();

        // Print out word and dashes for word characters & game play
        gameplay(gsWrd, chWrd, lives, usrLtr, ltrsGs, numGs, scores);

        // Losing Condition
        int pts = (lives == 0) ? 0 : WIN_POINTS;

        if (lives == 0) {
            cout << "Game over! You ran out of lives. The word was: " << gsWrd << endl;
            pts += 0;

            while (rdWrds >> usrNm) {
                cout << usrNm << " has won no points." << endl;
                cout<<endl;
            }

            // Update file
            wrdBnk << usrNm << " " << pts << " has points." << endl;
        }

        // If the player wins, their points are added to the file
        while (rdWrds >> usrNm) {
            cout << usrNm << setw(2) << " has won " << WIN_POINTS << " points!" << endl;
            pts += WIN_POINTS;
            //pushes scores into vector
            scores.push_back(pts);
            cout<<endl;
        }

        // Update the file
        wrdBnk << usrNm << " has " << pts << " points." << endl;

        //pushs scores into vector
        scores.push_back(pts);
        
    } while (againORexit());

    cout << "Thank you for playing!" << endl;
    wrdBnk.close();

    // Exit the program
    return 0;
}

void choosingword(int& chWrd, string& gsWrd, string usrWrds[], vector<int>& scores) {
    // Display the Rules and intro
    cout << "Welcome to HangMan!" << endl;
    cout << "Rules:" << endl;
    cout << "1. Do not repeat the same letter" << endl;
    cout << "2. Solve the mystery word" << endl;
    cout << "3. Have fun!" << endl;
    cout << "--------------------------------" << endl;

    // Choose random number from 1 to 10 & validate
    cout << "Choose a level from 1 - 10:";
    cin >> chWrd;

    // Set word to string
    string words[10] = {"CAR", "TREE", "LINUX", "MONKEY", "COMPUTER",
                        "WEREWOLF", "INFLATION", "AUTOMOBILE", "RELATIONSHIP", "QUINTESSENTIAL"};
    if (chWrd >= 1 && chWrd <= 10) {
        gsWrd = words[chWrd - 1]; // Adjust index since array starts from 0
    } else {
        // Handle invalid input
        while (chWrd > 10 || chWrd <= 0 || chWrd != '0' || chWrd != '9') {
            cout << "Invalid number, try again:" << setw(2);
            cin >> chWrd;
        }
    }

    // Add the chosen word to the array
    usrWrds[0] = gsWrd;
    
}

void gameplay(string& gsWrd, int chWrd, int& lives, char usrLtr, char ltrsGs[], int& numGs, vector<int>& scores) {
    // Initialize a 2D array to store the state of the word
    char wrdSt[gsWrd.length()][2];
    for (int i = 0; i < gsWrd.length(); ++i) {
        wrdSt[i][0] = '-';
        wrdSt[i][1] = ' '; // Formatting
    }

    // Display initial state of the word (all dashes)
    cout << "Current word: ";
    for (int i = 0; i < gsWrd.length(); i++) {
        cout << wrdSt[i][0] << wrdSt[i][1];
    }
    cout << endl;

    bool cont = true; // Flag to control loop continuation
    while (cont && lives > 0) {
        
        //Select Sort for letters guessed
        for (int i = 0; i < numGs - 1; ++i) {
            int minIdx = i;
            for (int j = i + 1; j < numGs; ++j) {
                if (ltrsGs[j] < ltrsGs[minIdx]) {
                    minIdx = j;
                }
            }
            if (minIdx != i) {
                // Swap ltrsGs[i] and ltsGs[minIdx]
                char temp = ltrsGs[i];
                ltrsGs[i] = ltrsGs[minIdx];
                ltrsGs[minIdx] = temp;
            }
        }

        // Display guessed letters
        cout << "Guessed letters: ";
        for (int i = 0; i < numGs; i++) {
            cout << ltrsGs[i] << " ";
        }
        cout << endl;

        cout << "Guess a letter: ";
        cin >> usrLtr;
        usrLtr = toupper(usrLtr); // Convert letter to capital

        // Check for repetition
        bool ltrAgn = false; // Check for guessed letter again
        for (int i = 0; i < numGs; i++) {
            if (ltrsGs[i] == usrLtr) {
                ltrAgn = true;
                cout << "You have already guessed this letter. Try again." << endl;
            }
        }

        // Add the guessed letter to the array of guessed letters
        if (!ltrAgn) {
            ltrsGs[numGs++] = usrLtr;

            // Check if the guessed letter is in the word
            bool crLtr = false;
            for (int i = 0; i < gsWrd.length(); i++) {
                // Access char inside the string
                if (usrLtr == gsWrd[i]) {
                    crLtr = true;
                    wrdSt[i][0] = usrLtr; //Update word being solved
                }
            }
            // Update the guessed word depending on the bool expression
            if (crLtr) {
                cout << "Correct!" << endl;
            } else {
                // Lives will decrement if user chooses wrong letter
                --lives;
                cout << "Incorrect. Lives remaining: " << lives << endl;
            }

            // Display word with new letters in it
            cout << "Current word: ";
            for (int i = 0; i < gsWrd.length(); i++) {
                cout << wrdSt[i][0] << wrdSt[i][1];
            }
            cout << endl;

            // Check if word has been completely guessed
            bool compGs = true;
            for (int i = 0; i < gsWrd.length(); i++) {
                if (wrdSt[i][0] == '-') {
                    compGs = false;
                }
            }
            // Exit the loop if word is guessed or no more lives left
            if (compGs || lives == 0) {
                cont = false; // Set flag to exit loop
                if (compGs) {
                    cout << "Congratulations! You guessed the word!" << endl;
                }
            }
        }
    }
    // End of word guessing
}

bool againORexit() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}
