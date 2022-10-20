/*
PIC 10A Homework 3, backwards.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/21/2022
Challenge: 
- build program with headers <iostream> and <string> ony.
- must use a loop (for, while, or do-while).
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter word: ";
    string userWord, storage, revString;
    cin >> userWord;
    int wordLength = userWord.length();
    for (int index = wordLength - 1; index >= 0; index--)
    {
      storage = userWord[index]; //for each iteration, this variable gets a new character.
      revString = revString + storage; // this line concatenates the new character with the already existing string.
    }
    cout << "Backwards: " << revString;
    return 0;
}
