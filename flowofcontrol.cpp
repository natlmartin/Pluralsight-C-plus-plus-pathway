#include <iostream>
using std::cout; 
using std::cin; 

int main() {
    int answer = 7;
    int guess; 
    while(guess != answer && guess != 11){
        cout << "Guess a number between 1 - 10: \n";
        cin >> guess; 

        if (guess < answer) {
            cout << "Too low! Guess again or enter 11 to quit: \n"; 
        }
        if (guess > answer) {
            cout << "Too high! Guess again or enter 11 to quit: \n";
        }
    }
    if (guess == answer) {
        cout << "Congratulations! You guessed the number :) \n";
    }
    if (guess == 11) {
        cout << "Thank you for playing.\n";
    }
}