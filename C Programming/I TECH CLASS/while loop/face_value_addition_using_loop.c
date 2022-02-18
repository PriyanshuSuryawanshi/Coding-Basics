#include <stdio.h>

int main()

{

    int n, addition = 0, rem;

    printf("Enter a number Whose Digit's Sum is needed: ");

    scanf("%d", &n);

    while (n != 0)
    {

        rem = n % 10;

        addition = addition + rem;

        n = n/ 10;
    }

    printf("Sum Of Digits If Number: %d", addition);

    return 0;
}