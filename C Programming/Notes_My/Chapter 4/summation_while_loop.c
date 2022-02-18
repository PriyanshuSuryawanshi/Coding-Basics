#include <stdio.h>
int main()
{

    int num, sum, m;
    sum = 0;
    m = 0;
    printf("Enter Your Number\n");
    scanf("%d", &num);
    while (m <= num)
    {
        sum += m;
        m++;
    }
    printf("summation is %d\n", sum);

    return 0;
}