// Better Method & also formatted 

#include <stdio.h>
int main()
{

    int a, b, c, d;

    printf("!!!Don't repeat the Numbers!!!\n");

    printf("Enter 1st Unique Number\n");
    scanf("%d", &a);
    printf("Enter 2nd Unique Number\n");
    scanf("%d", &b);
    printf("Enter 3rd Unique Number\n");
    scanf("%d", &c);
    printf("Enter 4th Unique Number\n");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is the Greatest Number\n", a);
            }
            else
            {
                if (c > d)
                {
                    printf("%d is the Greatest Number\n", c);
                }
                else //d>c
                    printf("%d is the Greatest Number\n", d);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is the Greatest Number\n", b);
            }
        }
        else
        {
            printf("%d is the Greatest Number\n", d);
        }
    }

    return 0;
}