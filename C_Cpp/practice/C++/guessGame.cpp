#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int count = 0;
    int limit = 3;
    bool outOfGuesses = false;

    do {
        if (count < limit){
            cout << "Enter your guess: ";
            cin >> guess;
            count++;
        }
        else { outOfGuesses = true; }
    } while (secretNum != guess && !outOfGuesses);


    if (outOfGuesses) { cout << "You Lose" << endl;}
    else {
        cout << "You Win!" << endl;
    }
    return 0;
}