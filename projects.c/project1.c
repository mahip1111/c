// We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”. When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.   Hint: Use loop & use a random number generator.

#include <stdio.h>
#include <stdlib.h>   // #include <stdlib.h> — includes rand() and srand() (random functions) and other utility functions.
#include <time.h>     // #include <time.h> — provides time() so we can seed the random number generator with the current time.

int main()
{
    srand(time(0));  // Just note that it is a used to Initialize random number generator

    int randomNumber = (rand() % 100) + 1;   // Generate random number between 1 and 100
    int no_of_guesses = 0;
    int guessed_number;

    // printf("Random Number: %d\n", randomNumber);      this will help you to know the random number.

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed_number<randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}