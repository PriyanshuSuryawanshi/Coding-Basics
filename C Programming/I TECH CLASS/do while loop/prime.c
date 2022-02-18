#include <stdio.h>

void main()
{   
    // 1 = True ; 0 = False;
    // prime = 1 means it is prime;
    // prime = 0 means it is not prime
    int i, num, prime;
    i = 2, prime = 1;
    printf("Enter The Number\n");
    scanf("%d", &num);

    do
    {
        if (num % i == 0)
        {   
            prime = 0;
            break;
        }
        i++;
    }while (i < num);

    if (prime == 0)
    {
        printf("%d is not a prime number\n", num);
    } 
    else
    {
        printf("%d is a prime number\n", num);
    }
}