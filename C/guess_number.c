#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(0));
    number = rand() % 1000 + 1;  // Generate a random number between 1 and 1000

    while (1) {
        printf("Guess the number (between 1 and 1000)\n~ ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Yes, your guess is correct.\n");
            break;
        } else if (guess > number) {
            printf("Incorrect! Please try to guess a smaller number.\n");
        } else {
            printf("Incorrect! Please try to guess a larger number.\n");
        }
    }

    printf("You tried %d times to find the correct number.\n", attempts);

    return 0;
}
