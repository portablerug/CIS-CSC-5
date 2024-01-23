/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:56 PM
 * Purpose: Adds total cost of items with sales tax of %7
 */

#include <iostream>
using namespace std;
//User Libraries 

//Global Constants - Math, Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float cost1, //Every item is in decimal form          
            cost2,
            cost3,
            cost4,
            cost5;
   
    float sbtCst, //Sub total 
            txCst, //Amount of sales tax due
            ttl; //Grand Total 
    //Initialize all variables
    cost1 = 15.95; //Cost of each item 
    cost2 = 24.95;
    cost3 = 6.95;
    cost4 = 12.95;
    cost5 = 3.95;
            
    //Process or Map solution
    sbtCst = cost1 + cost2 + cost3 + cost4 + cost5; //Sum of all items
    txCst = (cost1 + cost2 + cost3 + cost4 + cost5) * .07; //Amount of sales tax 
    ttl = sbtCst + txCst; //Sales tax added to sub total for final grand total
                                                       
    //Display the output
    cout<<"Price of item 1 = $"<<cost1<<endl;
    cout<<"Price of item 2 = $"<<cost2<<endl;
    cout<<"Price of item 3 = $"<<cost3<<endl;
    cout<<"Price of item 4 = $"<<cost4<<endl;
    cout<<"Price of item 5 = $"<<cost5<<endl;
    cout<<"Sub Total: $"<<sbtCst<<endl;
    cout<<"Sales Tax: $"<<txCst<<endl;
    
    cout<<"Total: $"<<ttl<<endl;

    //Exit the program
    return 0;
}

