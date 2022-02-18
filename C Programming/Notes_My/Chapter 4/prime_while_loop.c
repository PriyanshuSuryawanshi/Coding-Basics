#include <stdio.h>
int main()
{

    int i = 2;
    int prime = 1;
    int num;
    printf("Enter Your Number\n");
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
        printf("It is Not a Prime Number");
    }
    else
    {
        printf("It is Prime Number");
    }

    return 0;
}