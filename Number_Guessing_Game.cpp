#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" <<endl;

    while (true) {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}
