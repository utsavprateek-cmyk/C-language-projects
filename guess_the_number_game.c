#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", random_number);

    printf("guess the number between 1 and 100: ");

    do {
printf("Enter your guess: ");
scanf("%d", &guessed);
if (guessed > random_number) {
    printf("Too high! Try again.\n");
} else if (guessed < random_number) {
    printf("Too low! Try again.\n");
} else {
    printf("Congratulations! You guessed the number in %d attempts.\n", no_of_guesses + 1);
}
no_of_guesses++;
    } while (guessed!=random_number);
    
    return 0;
}
