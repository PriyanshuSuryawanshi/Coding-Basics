#include <stdio.h>

void main()
{
    // prime = 1 means it is prime
    // prime = 0 means it is not prime
    int i, num, prime;
    i = 2, prime = 1;
    printf("Enter The Number\n");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {   
            prime = 0;
            break;
        }
        i++;
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", num);
    }
    else
    {
        printf("%d is a prime number\n", num);
    }
}
