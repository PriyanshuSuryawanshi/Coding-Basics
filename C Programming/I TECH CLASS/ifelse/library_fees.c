#include <stdio.h>

int main() {
 
    int days;
    float fine;

    printf("Enter the Number of days you are late to submit the Book\n");
    scanf("%d",&days);
    if(days<=5)
    {
        fine=0.5*days;
        printf("Fine is Rs.%f\n",fine);
    }
    else if(days>5 && days<=10)
    {
        fine=2.5+(days-5);
        printf("Fine is Rs.%f\n",fine);
    }
    else if(days>10 && days<=30)
    {
        fine=7.5+(days-10)*5;
        printf("Fine is Rs.%f\n",fine);
    }
    else if(days>30)
    {
        printf("Your Membership Has been Cancelled");
    }
}