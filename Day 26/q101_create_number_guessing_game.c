// Day 26 - Q101
// Problem Statement: Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    srand(time(0));
    secret = rand() % 100 + 1; // Number between 1 and 100
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100:\n");
    
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > secret)
            printf("Too high! Try again.\n");
        else if (guess < secret)
            printf("Too low! Try again.\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
    } while (guess != secret);
    
    return 0;
}
