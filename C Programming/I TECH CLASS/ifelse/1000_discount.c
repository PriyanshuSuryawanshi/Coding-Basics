#include <stdio.h>
// ppt slide number 7
void main() {
//  num = number of items purchased
// cp = cost price of single product
//  disc = discount given
 float num,cp,tp,disc;
printf("Enter The Number of Products Purchased\n");
scanf("%f",&num);
printf("Enter The Price of Product Purchased\n");
scanf("%f",&cp);
tp=num*cp;
    if(num>=1000)
    {
        disc = (tp)*0.10;
        printf("You Get A Discount of 10 Percent\n");
        printf("Your Bill = %f",tp-disc);
    }
    else
    {
        printf("You Didn't get any Discount\n");
        printf("Your Bill = %f\n",tp);
    }

}