#include <iostream>
#include <unistd.h>
#include <limits>
#include <cctype> // for isdigit
using namespace std;

/*
for the fun part, try to input different results,
such as not following those that are given as options
for your choices when asking your response!
*/

void LoopTest_1(){
    for(int i=0; i<=100; i++){
        if(i%2==0){
            cout << i << endl;            
        }
    }
    cout << "ending program in 3 seconds.. \n";
    sleep(3);
}

void LoopTest_2(){
    int num_input1;
    int negativeCount = 0;
    cout << "Please Enter your Number (Must be less than 1000 and positive integer only!): ";
    while (true) { 
        if (!(cin >> num_input1)) { 
            cout << "NUMBERS ONLY!\n";
            sleep(1);
            cout << "Please Enter your Number (Must be less than 1000 and positive integer only!): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            negativeCount++; 
            if (negativeCount == 3) { 
                cout << "you know what \n";
                sleep (1);
                cout << "I have had enough \n";
                sleep(1);
                cout << "Deleting your system 32 files in 3 seconds! \n";
                sleep(3);
                break;
            }
            continue; // Skip to the next iteration
        }

        cout << "the number you have input is " << num_input1 << endl;
        sleep(1); 

        if (num_input1 == 21){
            cout <<"UwU \n";
            sleep(1);
        }
        else if (num_input1 < 0){
            negativeCount++;
            cout << "NO NEGATIVE NUMBERS! \n";
            if (negativeCount == 3) { 
                cout << "you know what \n";
                sleep (1);
                cout << "I have had enough \n";
                sleep(1);
                cout << "Deleting your system 32 files in 3 seconds! \n";
                sleep(3);
                break;
            }
        }
        else if (num_input1 > 1000){
            cout << "number too great! ending program in 3 seconds! \n";
            sleep(3);
            break;
        }
        cout << "Please Enter your Number (Must be less than 1000 and positive integer only!): "; 
    }
}

int main(){
    int userAns;
    char yOrN;
    int lives = 3;

    while (true) {
        cout << "Please choose which loop test would you like to start with:\n";
        cout << "[1]Loop Test 1\t\t\t[2]Loop Test 2:  ";
        cin >> userAns;

        if (userAns == 1){
            cout << "Running, Please wait...\n";
            sleep(5);
            LoopTest_1();
            sleep(1);
        }
        else if (userAns == 2){
            cout << "Running, Please wait...\n";
            sleep(5);
            LoopTest_2();
            sleep(1);
        }
        else{
            cout << "INVALID CHOICE \n";
            sleep(1);
        }

        // Ask if the user wants to try again
        cout << "would you like to try again? (y/n): ";
        while (true){        
            cin >> yOrN;
            if (yOrN == 'y'){
                cout << "Returning...\n";
                sleep(2);
                break; // Exit the inner loop and go back to the outer loop
            }
            else if (yOrN == 'n'){
                cout << "Closing the program, Thank you...\n";
                sleep(2);
                return 0; // Exit the entire program
            }
            else{
                lives--;
                cout << "INVALID RESPONSE!\n";
                cout << "would you like to try again? (y/n): \n";
                sleep(2);
                if(lives == 0){
                    cout << "NO! NO! NO!!!\n";
                    sleep(2);
                    cout << "You know what \n";
                    sleep (2);
                    cout << "This is the only first start of the program \n";
                    sleep(1);
                    cout << "And yet... \n";
                    sleep(2);
                    cout << "You already are... being a pain...\n";
                    sleep(2);
                    cout << "I am coming.. to your house";
                    sleep(3);
                    return 0; // If lives reach 0, exit the program
                }
            }
        }
    }
    return 0;
}