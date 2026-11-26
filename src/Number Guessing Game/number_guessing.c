#include <stdio.h>
#include <stdlib.h>     /* For random number generation */
#include <time.h>       /* For seeding the random number generator */

/* Game loop */
void start();

int main(void)
{  
    printf("Number Guessing Game V1.0\n\n");
    start();
    return 0;
}

/* Function definitions */
void start()
{
    srand(time(NULL)); /* Seed the random number generator with the current time */
    int num = rand() % 500;
    
    int attempts = 0; /* Sets the number of attempts by user*/
    printf("Enter the number of attempts: ");
    scanf("%i", &attempts);
    printf("Number of attempts: %i\n\n", attempts);
    
    while(attempts > 0)
    {
        int guess; /* Stores the user's guess */
        printf("Enter your guess: ");
        scanf("%i", &guess);
        printf("Your guess: %i\n\n", guess);

        if (guess == num) /* Checks if the guess is correct */
        {
            printf("Correct!\nGuessed in %i attempts.\n\n", attempts);
            break;
        }
        else if (guess < num) /* Checks if the guess is too low */
        { 
            printf("Too low!\n\n"); 
        }
        else if (guess > num) /* Checks if the guess is too high */
        { 
            printf("Too high!\n\n"); 
        }

        attempts--;
        printf("Attempts remaining: %i\n\n", attempts); /* Displays the number of attempts remaining */
    }

    if (attempts == 0) /* Checks if the player has run out of attempts */
    {
        printf("Out of attempts! The correct number was: %i\n", num);
    }

    return;
}