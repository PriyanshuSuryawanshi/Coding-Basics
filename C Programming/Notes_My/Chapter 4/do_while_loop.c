#include <stdio.h>

int main()
{
    int i;
    int n = 0;
    printf("Enter your number\n");
    scanf("%d", &i);

    do
    {
        printf("number %d\n", n);
        n++;
    } while (n <= i);

    return 0;
}