#include <iostream>
using std::cout;
using std::cin; 

#include <string> 
using std::string; 

int main() {
    string wordone;
    string wordtwo;

    cout << "Enter your first word: \n";
    cin >> wordone; 

    cout << "Enter your second word: \n";
    cin >> wordtwo; 

    cout << "Beep boop beep... \n";
    
    if (wordone > wordtwo) {
        cout << wordone + " is longer than " + wordtwo + '\n';
    }
    else if (wordtwo > wordone) {
        cout << wordtwo + " is longer than " + wordone + '\n';
    }
    else if (wordone.length() == wordtwo.length()) {
        cout << "Beep boop. You tried to trick me! Both words are the same length. \n";
    }
}