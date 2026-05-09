#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Number Guessing Game
 * A simple terminal-based game where the user tries to guess a random number.
 */

int main() {
    int target, guess, attempts = 0;
    
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    target = (rand() % 100) + 1;
    
    printf("========================================\n");
    printf("   WELCOME TO THE NUMBER GUESSING GAME  \n");
    printf("========================================\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");
    
    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        attempts++;
        
        if (guess > target) {
            printf("Too high! Try again.\n");
        } else if (guess < target) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCONGRATULATIONS! You guessed it in %d attempts!\n", attempts);
        }
        
    } while (guess != target);
    
    printf("========================================\n");
    
    return 0;
}
