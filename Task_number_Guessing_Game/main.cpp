#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number, guess;

    srand(time(0));                 // Seed for random number
    number = rand() % 100 + 1;       // Random number between 1 and 100

    cout << "Number Guessing Game" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high!" << endl;
        } else if (guess < number) {
            cout << "Too low!" << endl;
        } else {
            cout << "Correct! You guessed the number." << endl;
        }
    } while (guess != number);

    return 0;
}
