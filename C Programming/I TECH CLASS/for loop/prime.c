#include <stdio.h>

void main() {
 
 int i, num, prime;
    printf("Enter The Number\n");
    scanf("%d", &num);

    for(i = 2, prime = 1;i<num;i++)
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
}
