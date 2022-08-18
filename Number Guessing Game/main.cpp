//Author: Noah Huffman
//Date: 3/14/2021

#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int num;
    int numOfGuesses = 0;
    cout << "I am thinking of a number between 1-20. You have 3 guesses. Enter your first guess: " << endl;
    cin >> num;
    numOfGuesses++;

    while (numOfGuesses < 3){
        if (num < secretNum){
            cout << "The number is higher " << endl;
            cin >> num;
            numOfGuesses++;
        } else if (num > secretNum){
            cout << "The number is lower " << endl;
            cin >> num;
            numOfGuesses++;
        } else if (num == secretNum){
            cout << "BINGO" << endl;
            break;
        }
    }
    if (numOfGuesses > 2){
        printf("Out of guesses! :-(");
    }
}
