#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1; 

    printf("Welcome to the Number Guesser Game!\n");
    printf("I have selected a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        while (scanf("%d", &guess) != 1 || guess < 1 || guess > 100) {
            printf("Invalid input. Please enter a number between 1 and 100: ");
            while (getchar() != '\n'); 
        }
        nguesses++;

        if (guess > number) {
            printf("Too high! Try a lower number.\n");
        } else if (guess < number) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", nguesses);
        }
    } while (guess != number);

    printf("Thank you for playing!\n");
    return 0;
}
