#include<stdio.h>
#include<stdlib.h>   //Header file for number=rand()
#include<time.h>    //Header file for srandd(time(0))

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;  // Generates a random number between 1 to 100
    // printf("The number is %d\n", number);  NOW PLAY THE GAME BECAUSE YOU WONT BE ABLE TO SEE THE NUMBER NOW

// Keep running the until the number is guessed.    
    
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower number please!\n");
        }
        else if (guess<number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Yeah!You guessed it right in %d attempts!\n", nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}
