#include <stdio.h>

void main() {
 
int marks;
printf("Enter Your Marks\n");
scanf("%d",&marks);
    if (marks<=100 && marks>=90)
    printf("Your Grade is A");
    else if  (marks<90 && marks>=80)
    printf("Your Grade is B");
    else if (marks<80 && marks>=70)
    printf("Your Grade is C");
    else if (marks<70 && marks>=60)
    printf("Your Grade is D");
    else if (marks<60 && marks>=50)
    printf("You Have Pass");
    else 
    printf("You Have Failed");
}