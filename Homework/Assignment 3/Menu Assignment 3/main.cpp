#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    // Declare all variables
    char nMnuItm;
    unsigned short probNum;

    do {
        // Display Menu
        cout << "This is an example Menu Program" << endl;
        cout << "Input the problem number to run" << endl;
        cout << "Type 1 for Sorting Names problem" << endl;
        cout << "Type 2 for Books problem" << endl;
        cout << "Type 3 for Bank Charges problem" << endl;
        cout << "Type 4 for Runners problem" << endl;
        cout << "Type 5 for ISP problem" << endl;
        cout << "Type 6 for Rock Paper Scissors" << endl;
        cout << "Type 7 for Roman Numeral Conversion" << endl;
        cout << "Type 8 for Compatible Signs" << endl;
        cout << "Enter any other key to exit" << endl;

        cin >> probNum;

        // Execute the Menu/Problem Number
        switch (probNum) {
            case 1: {
                // Problem 1: Sorting Names
                string nameA, nameB, nameC;
                string first, second, third;

                // Input names
                cin >> nameA;
                cin >> nameB;
                cin >> nameC;

                // Sort names
                if (nameA < nameB && nameA < nameC) {
                    first = nameA;
                    second = (nameB < nameC) ? nameB : nameC;
                    third = (nameB < nameC) ? nameC : nameB;
                } else if (nameB < nameA && nameB < nameC) {
                    first = nameB;
                    second = (nameA < nameC) ? nameA : nameC;
                    third = (nameA < nameC) ? nameC : nameA;
                } else {
                    first = nameC;
                    second = (nameB < nameA) ? nameB : nameA;
                    third = (nameB < nameA) ? nameA : nameB;
                }

                // Display the outputs
                cout << "Sorting Names" << endl;
                cout << "Input 3 names" << endl;
                cout << first << endl;
                cout << second << endl;
                cout << third;
                break;
            }

            case 2: {
                // Problem 2: Book Worm Points
                int numBks, numPts = 0;

                // Input number of books
                cin >> numBks;

                // Calculate points based on the number of books
                if (numBks == 1) {
                    numPts += 5;
                } else if (numBks == 2) {
                    numPts += 15;
                } else if (numBks == 3) {
                    numPts += 30;
                } else if (numBks >= 4) {
                    numPts += 60;
                }

                // Display the outputs
                cout << "Book Worm Points" << endl;
                cout << "Input the number of books purchased this month." << endl;
                cout << "Books purchased = " << setw(2) << numBks << endl;
                cout << "Points earned   = " << setw(2) << numPts;
                break;
            }

            case 3: {
                // Problem 3: Monthly Bank Fees
                int balnc, nmChks;
                float chkFee = 0, mnFee = 10, lwBlnc, nwBlnc;

                // Input values
                cin >> balnc >> nmChks;

                // Calculate check fees
                chkFee = (nmChks < 20) ? nmChks * 0.10 :
                         (nmChks < 40) ? nmChks * 0.08 :
                         (nmChks < 60) ? nmChks * 0.06 : nmChks * 0.04;

                // Low Balance
                lwBlnc = (balnc < 400) ? 15 : 0;

                // Equation for the new balance
                nwBlnc = balnc - lwBlnc - chkFee - mnFee;

                // Display the outputs
                cout << "Monthly Bank Fees" << endl;
                cout << "Input Current Bank Balance and Number of Checks" << endl;
                cout << fixed << setprecision(2);
                cout << "Balance     $" << setw(9) << static_cast<float>(balnc) << endl;
                cout << "Check Fee   $" << setw(9) << chkFee << endl;
                cout << "Monthly Fee $" << setw(9) << mnFee << endl;
                cout << "Low Balance $" << setw(9) << static_cast<float>(lwBlnc) << endl;
                cout << "New Balance $" << setw(9) << static_cast<float>(nwBlnc);
                break;
            }

            case 4: {
                // Problem 4: Race Ranking Program
                string runner1, runner2, runner3;
                float time1, time2, time3;
                string one, two, three;

                // Input values
                cin >> runner1 >> time1;
                cin >> runner2 >> time2;
                cin >> runner3 >> time3;

                // Sort runners based on time
                if (time1 < time2 && time1 < time3) {
                    one = runner1;
                    two = (time2 < time3) ? runner2 : runner3;
                    three = (time2 < time3) ? runner3 : runner2;
                } else if (time2 < time1 && time2 < time3) {
                    one = runner2;
                    two = (time1 < time3) ? runner1 : runner3;
                    three = (time1 < time3) ? runner3 : runner1;
                } else {
                    one = runner3;
                    two = (time2 < time1) ? runner2 : runner1;
                    three = (time2 < time1) ? runner1 : runner2;
                }

                // Display the outputs
                cout << "Race Ranking Program" << endl;
                cout << "Input 3 Runners" << endl;
                cout << "Their names, then their times" << endl;
                cout << one << "\t" << setw(3) << time1 << endl;
                cout << two << "\t" << setw(3) << time2 << endl;
                cout << three << "\t" << setw(3) << time3;
                break;
            }

            case 5:
                //Declare Variables
                float hrs,bill;

                char pckg;
                //Initialize or input i.e. set variable values
                //Display outputs
                cout<<"ISP Bill"<<endl;
                cout<<"Input Package and Hours"<<endl;

                cin>>pckg>>hrs;
                
                //Output for package A
                if (pckg=='A'){
                    bill = hrs<=10 ? hrs*0.995:
                            hrs>10 ? 9.95 + (hrs-10)*2:0;
                }

                //Output for package B
                if (pckg=='B'){
                    bill = hrs<=20 ? hrs*0.7475:
                            hrs>20 ? 14.95 + (hrs-20)*1:0;
                }

                //Output for package C 
                if (pckg =='C'){
                    bill = hrs<=744? 19.95:0;
                }

                cout<<setprecision(2)<<fixed;
                cout<<"Bill = $"<<setw(6)<<bill;
                
                break;
                
            case 6: {
                //Rock Paper Scissors Game
                char p1, p2; //Players
                string msg;

                //Initialize or input i.e. set variable values
                cin >> p1 >> p2;
                p1 -= p1 >= 97 ? 32 : 0; //Conversion to lower case
                p2 -= p2 >= 97 ? 32 : 0;
                msg = "Nothing";

                //Map inputs -> outputs
                msg = p1 == p2 ? "Nobody wins." : msg;
                if (p1 == 'R') {
                    if (p2 == 'P') msg = "Paper covers rock.";
                    if (p2 == 'S') msg = "Rock breaks scissors.";
                } else if (p1 == 'P') {
                    if (p2 == 'R') msg = "Paper covers rock.";
                    if (p2 == 'S') msg = "Scissors cuts paper.";
                } else if (p1 == 'S') {
                    if (p2 == 'R') msg = "Rock breaks scissors.";
                    if (p2 == 'P') msg = "Scissors cuts paper.";
                }

                //Display the outputs
                cout << "Rock Paper Scissors Game" << endl;
                cout << "Input Player 1 and Player 2 Choices" << endl;
                cout << msg;
                break;
            }

            case 7: {
                //Arabic to Roman numeral conversion
                unsigned char n1, n10, n100, n1000;
                unsigned short x;
                string msg = "";

                // Input value
                cin >> x;

                // Check if the number is in the valid range
                if (x < 1000 || x > 3000) {
                    msg = " is Out of Range!";
                } else {
                    // Extract each digit
                    n1 = (x) % 10;
                    n10 = (x / 10) % 10;
                    n100 = (x / 100) % 10;
                    n1000 = (x / 1000);

                    // Code for outputting Roman numerals
                    switch (n1000) {
                        case 3: msg += "MMM"; break;
                        case 2: msg += "MM"; break;
                        case 1: msg += "M"; break;
                    }

                    msg += (n100 == 9) ? "CM" :
                           (n100 == 8) ? "DCCC" :
                           (n100 == 7) ? "DCC" :
                           (n100 == 6) ? "DC" :
                           (n100 == 5) ? "D" :
                           (n100 == 4) ? "CD" :
                           (n100 == 3) ? "CCC" :
                           (n100 == 2) ? "CC" :
                           (n100 == 1) ? "C" : "";

                    if (n10 == 9) msg += "XC";
                    if (n10 == 8) msg += "LXXX";
                    if (n10 == 7) msg += "LXX";
                    if (n10 == 6) msg += "LX";
                    if (n10 == 5) msg += "L";
                    if (n10 == 4) msg += "XL";
                    if (n10 == 3) msg += "XXX";
                    if (n10 == 2) msg += "XX";
                    if (n10 == 1) msg += "X";

                    if (n1 == 9) msg += "IX";
                    else if (n1 == 8) msg += "VIII";
                    else if (n1 == 7) msg += "VII";
                    else if (n1 == 6) msg += "VI";
                    else if (n1 == 5) msg += "V";
                    else if (n1 == 4) msg += "IV";
                    else if (n1 == 3) msg += "III";
                    else if (n1 == 2) msg += "II";
                    else if (n1 == 1) msg += "I";

                    msg = " is equal to " + msg;
                }

                // Display the outputs
                cout << "Arabic to Roman numeral conversion." << endl;
                cout << "Input the integer to convert." << endl;
                cout << x << msg;
                break;
            }

            case 8: {
                //Compatibale Signs 
                //Declare Variables and strings
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
                
                break;
            }

            default:
                cout << "Exiting the Menu" << endl;
                break;
        }
        cin >> nMnuItm;

    } while (nMnuItm >= '1' && nMnuItm <= '8');

    // Exit the program
    return 0;
}
