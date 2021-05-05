// Copyright (c) 2021 St. Mother Teresa HS All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program plays the number guessing game

#include <iostream>
#include <ctime>
using namespace std

; int main() {
    srand(time(0));

    int random = (rand()%10+1);
    int guess = 0;


        cout << "Guess a number: ";
        cin >> guess;
        if (guess == random) {
            cout << "Correct!" << endl;
        }

        else(guess != random)
            ; cout << "Incorrect. The answer was " << random << "" << endl;
}
