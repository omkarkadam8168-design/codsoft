#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int rand_number = rand() % 100 + 1;
    int guess;

    cout << "Guess my random generated number between 1 to 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < rand_number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > rand_number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Correct! You guessed the number." << endl;
        }

    } while (guess != rand_number);

    return 0;
}
