/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 16, 2024, 1:34 PM
 * Purpose: Truth Table
 */

#include <iostream>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Declare all variables
    bool x,y;
  
    //Output Heading
    cout<<"X Y !X !Y X && Y X||Y X^Y X^Y^Y X^Y^X !(X && Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Row 1 output
    x=y=true;
    cout<<(x? 'T': 'F')<<" "
        <<(y? 'T': 'F')<<"  "
        <<(!x? 'T': 'F')<<"  "
        <<(!y? 'T': 'F')<<"   "
        <<(x&&y? 'T': 'F')<<"     "
        <<(x||y? 'T': 'F')<<"    "
        <<(x^y ? 'T': 'F')<<"    "
        <<(x^y^y? 'T': 'F')<<"    "
        <<(x^y^x? 'T': 'F')<<"         "
        <<(!(x&&y)? 'T': 'F')<<"      "
        <<(!x||!y? 'T': 'F')<<"      "
        <<(!(x||y)? 'T': 'F')<<"       "
        <<(!x&&!y? 'T': 'F')<<endl;
   
    //Row 2 output
    y=false;
     cout<<(x? 'T': 'F')<<" "
        <<(y? 'T': 'F')<<"  "
        <<(!x? 'T': 'F')<<"  "
        <<(!y? 'T': 'F')<<"   "
        <<(x&&y? 'T': 'F')<<"     "
        <<(x||y? 'T': 'F')<<"    "
        <<(x^y ? 'T': 'F')<<"    "
        <<(x^y^y? 'T': 'F')<<"    "
        <<(x^y^x? 'T': 'F')<<"         "
        <<(!(x&&y)? 'T': 'F')<<"      "
        <<(!x||!y? 'T': 'F')<<"      "
        <<(!(x||y)? 'T': 'F')<<"       "
        <<(!x&&!y? 'T': 'F')<<endl;
   
    //Row 3 output
    x=false;
     cout<<(x? 'T': 'F')<<" "
        <<(y? 'T': 'F')<<"  "
        <<(!x? 'T': 'F')<<"  "
        <<(!y? 'T': 'F')<<"   "
        <<(x&&y? 'T': 'F')<<"     "
        <<(x||y? 'T': 'F')<<"    "
        <<(x^y ? 'T': 'F')<<"    "
        <<(x^y^y? 'T': 'F')<<"    "
        <<(x^y^x? 'T': 'F')<<"         "
        <<(!(x&&y)? 'T': 'F')<<"      "
        <<(!x||!y? 'T': 'F')<<"      "
        <<(!(x||y)? 'T': 'F')<<"       "
        <<(!x&&!y? 'T': 'F')<<endl;
   
     
    //Row 4 output
    x=y=false;
     cout<<(x? 'T': 'F')<<" "
        <<(y? 'T': 'F')<<"  "
        <<(!x? 'T': 'F')<<"  "
        <<(!y? 'T': 'F')<<"   "
        <<(x&&y? 'T': 'F')<<"     "
        <<(x||y? 'T': 'F')<<"    "
        <<(x^y ? 'T': 'F')<<"    "
        <<(x^y^y? 'T': 'F')<<"    "
        <<(x^y^x? 'T': 'F')<<"         "
        <<(!(x&&y)? 'T': 'F')<<"      "
        <<(!x||!y? 'T': 'F')<<"      "
        <<(!(x||y)? 'T': 'F')<<"       "
        <<(!x&&!y? 'T': 'F')<<endl;
   
     
     
    //Display the output
    
    //Exit the program
    return 0;
}

