#include <stdio.h>

int main()

{

    int initial_number,n, reverse = 0, rem;

    printf("Enter a number Whose Reverse is needed: ");

    scanf("%d", &n);
    initial_number=n;

    while (n != 0)
    {

        rem = n % 10;

        reverse = reverse * 10 + rem;

        n = n/ 10;
    }

// printf("Reversed Number: %d\n", reverse);

    if(initial_number==reverse){
    printf("%d is a Armstrong Number",initial_number);
    }
    else{
    printf("%d is not a Armstrong Number",initial_number);
    }

    return 0;
}
