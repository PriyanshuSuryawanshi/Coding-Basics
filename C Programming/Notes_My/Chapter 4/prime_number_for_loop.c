#include <stdio.h>
int main()
{

    int num;
    int prime = 1;

    printf("Enter Your Number\n");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", num);
    }

    else
    {
        printf("%d is a prime number\n", num);
    }

    return 0;
}