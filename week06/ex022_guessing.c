#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    int attempts = 0;
    printf("=== Number Guessing Game (1-100) ===\n");
    srand(time(NULL));
    int target = rand() % 100 + 1;
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > target)
        {
            printf("Too High!\n");
        }
        else if (guess < target)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != target);
    return 0;
}