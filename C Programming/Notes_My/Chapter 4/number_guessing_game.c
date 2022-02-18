#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess,nguesses;
    nguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1;
     //printf("Number is %d\n", number);

    printf("Guess the Number between 1 to 100\n");
    do
    {
        scanf("%d", &guess);
        if(guess>number){
            printf("Guess a smaller number\n");
        }
        if (guess<number){
            printf("Guess a larger number\n");
        }
        nguesses++;
    } while (guess != number);

    printf("You have entered the correct number in %d guesses\n",nguesses);

    return 0;
}