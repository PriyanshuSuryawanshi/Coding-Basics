#include <stdio.h>
int main()
{

    int i = 2;
    int num;
    int prime = 1;
    printf("Enter Your Number\n");
    scanf("%d", &num);

    do
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < num );

    if (prime == 0 && num != 2)
    {
        printf("%d is not a Prime Number\n", num);
    }
    else
    {
        printf("%d is a Prime Number\n", num);
    }

    return 0;
}