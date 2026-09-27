//NUMBER GUESSING GAME
#include <stdio.h>

int main()
{
    int secret = 7;
    int guess;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess the number between 1 and 10.\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("Correct! You guessed the number!\n");
            break;
        }
        else if(guess > secret)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Too low! Try again.\n");
        }
    }

    return 0;
}

// bit more fun and complexity can be added to this game by adding a scoring system, limiting the number of attempts, or providing hints after a certain number of incorrect guesses.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret;
    int guess;
    int attempts = 0;

    srand(time(0));

    secret = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess == secret)
        {
            printf("\n🎉 Correct!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
            break;
        }
        else if(guess > secret)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Too low! Try again.\n");
        }
    }

    return 0;
}