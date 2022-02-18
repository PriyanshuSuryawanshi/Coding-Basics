#include <stdio.h>

int main()
{
 
    int year;
    printf("Enter The Year\n");
    scanf("%d",&year);

    if(year%4==0 || year%100!=0 && year%400==0)
    {
        printf("The Year You Have Entered is a Leap Year\n");
    }
    else
    {
        printf("The Year You Have Entered is not a Leap Year\n");
    }
return 0;
}
