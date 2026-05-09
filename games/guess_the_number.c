#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * Number Guessing Game
 * A simple terminal-based game where the user tries to guess a random number.
 */

void play_game() {
    int target, guess, attempts = 0;
    
    // Generate a random number between 1 and 100
    target = (rand() % 100) + 1;
    
    printf("\nI'm thinking of a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");
    
    while (1) {
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
            break;
        }
    }
}

int main() {
    char choice;
    
    // Seed the random number generator once
    srand(time(0));
    
    printf("========================================\n");
    printf("   WELCOME TO THE NUMBER GUESSING GAME  \n");
    printf("========================================\n");
    
    do {
        play_game();
        
        printf("\nWould you like to play again? (y/n): ");
        scanf(" %c", &choice);
        choice = tolower(choice);
        
    } while (choice == 'y');
    
    printf("\nThanks for playing! Goodbye.\n");
    printf("========================================\n");
    
    return 0;
}
