#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "\tWelcome to the Number Guessing Game!\n";
    cout << "Guess the number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) 
		{
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess < secretNumber) 
		{
            cout << "Too low. Try again.\n";
        } else 
		{
            cout << "Too high. Try again.\n";
        }

    } 
	while (guess != secretNumber);

    return 0;
}

