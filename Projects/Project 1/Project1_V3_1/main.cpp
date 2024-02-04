/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 25, 2024, 11:52 PM
 * Purpose: HangMan
 */

#include <iostream> //Input output Library
#include <iomanip>  //Format Library
#include <fstream> //Read Write to files
#include <ctime>    //Random Number
#include <cstdlib>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    srand (static_cast<int>(time(0)));
    int chwrd;    //Word to choose from
    
    //Declare Variables
    string usrWrd;  //Users word
    ofstream wrdBnk("usr_wrdbank.txt");   //Create text file to save words
    string outWrd;  //String for outputting from file
    int lives;  //Users lives
    
    char usrLtr;  //User Letter
    string gsWrd;   //Guess Word
    
    //Initialize Variables
    lives = 5;  //5 Lives
    
    //Display the Rules and intro
    cout<<"Welcome to HangMan!"<<endl;
    cout<<"Rules:"<<endl;
    cout<<"1. Do not repeat the same letter"<<endl;
    cout<<"2. Solve the mystery word"<<endl;
    cout<<"3. Have fun!"<<endl;
    cout<<"--------------------------------"<<endl;
    
    //Choose random number from 1 to 10 
    int chWrd = (rand()%10) + 1;
    cout<<"Choose a number from 1 - 10:"<<endl;
    cin>>chWrd;
    cout<<endl;
    
    //Set word to string. (Note: Make functions for different genres of words)
    switch(chWrd){
            case 1: gsWrd = "Tree"; break;
            case 2: gsWrd = "Monkey"; break;
            case 3: gsWrd = "Computer"; break;
            case 4: gsWrd = "Pencil"; break;
            case 5: gsWrd = "Automobile"; break;
            case 6: gsWrd = "Werewolf"; break;
            case 7: gsWrd = "Inflation"; break;
            case 8: gsWrd = "Chaos"; break;
            case 9: gsWrd = "Calculus"; break;
            case 10: gsWrd = "Death"; break;
    }

    //Name to keep score
    cout<<"Enter your name: "<<endl;
    cin>>usrWrd;
    //Write to the file & output from file
    wrdBnk << usrWrd;
    ifstream rdWrds("usr_wrdbank.txt");
    
    while (getline (rdWrds, outWrd)) {
        cout << outWrd;
    }
    cout<<"Current word:"<<endl;
    
    //Print out dashes for word characters Can i read that?
    //for (int i=0; i<)
    
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

