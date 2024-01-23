/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Sorts the Runners times from fastest to slowest
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, //Holds the names of the runners
            name2,
            name3;
    
    float time1, //Holds the runners times
        time2,
        time3;
    
    string first,
        second,
        third;
    //Initialize or input i.e. set variable values
   
    //Takes in the user info and outputs it in sequence
    cin>>name1>>time1;
    cin>>name2>>time2;
    cin>>name3>>time3;
   
    //Map inputs -> outputs
    
    //Used same if else if statements as number 1 to sort the numbers instead of names. 
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;

    
    
     if (time1 < time2 && time1 < time3){
        first = name1;
        if(time2 < time3){
            second = name2;
            third = name3;
            
        cout<<first<<"\t"<<setw(3)<<time1<<endl;
        cout<<second<<"\t"<<setw(3)<<time2<<endl;
        cout<<third<<"\t"<<setw(3)<<time3;
    
        }else {
            third = name2;
            second = name3;

        cout<<first<<"\t"<<setw(3)<<time1<<endl;
        cout<<second<<"\t"<<setw(3)<<time3<<endl;
        cout<<third<<"\t"<<setw(3)<<time2;
        }
        
    }else if (time2 < time1 && time2 < time3){
        first = name2;
         if(time1 < time3){
            second = name1;
            third = name3;
            
        cout<<first<<"\t"<<setw(3)<<time2<<endl;
        cout<<second<<"\t"<<setw(3)<<time1<<endl;
        cout<<third<<"\t"<<setw(3)<<time3;
        
        }else {
            third = name1;
            second = name3;
            
        cout<<first<<"\t"<<setw(3)<<time2<<endl;
        cout<<second<<"\t"<<setw(3)<<time3<<endl;
        cout<<third<<"\t"<<setw(3)<<time1;
    
        }
    }else if(time3 < time2 && time3 < time1){
        first = name3;
         if(time2 < time1){
            second = name2;
            third = name1;
        
        cout<<first<<"\t"<<setw(3)<<time3<<endl;
        cout<<second<<"\t"<<setw(3)<<time2<<endl;
        cout<<third<<"\t"<<setw(3)<<time1;    
            
        }else{
            third = name2;
            second = name1;
            
        cout<<first<<"\t"<<setw(3)<<time3<<endl;
        cout<<second<<"\t"<<setw(3)<<time1<<endl;
        cout<<third<<"\t"<<setw(3)<<time2;    
            
        }
        
    }
    
    
    //Display the outputs
   
    //Exit stage right or left!
    return 0;
}