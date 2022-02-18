#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you,char computer)
{
    if (you == computer)
    {
        return 0;
    }
    if (you == 's' && computer == 'w')
    {
        return 1;
    }
    else if (you == 'w' && computer == 's')
    {
        return -1;
    }

    if (you == 's' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' && computer == 's')
    {
        return 1;
    }

    if (you == 'w' && computer == 'g')
    {
        return 1;
    }
    else if (you == 'g' && computer == 'w')
    {
        return -1;
    }

}

int main()
{
    char you,computer,result;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number<33)
    {
        computer = 's';
    }
    else if (number>33 && number<66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }

    printf("Enter 's' for Snake, 'w' for Water,'g' for Gun\n");
    scanf("%c",&you);
    result = snakewatergun(you,computer);
    printf("You Chose %c & Computer Chose %c\n",you,computer);
    if (result == 0)
    {
        printf("It's a Tie!\n");
    }
    else if (result == 1)
    {
        printf("You Won!!\n");
    }
    else if (result == -1)
    {
        printf("You Lost!\n");
    }

    return 0;
}