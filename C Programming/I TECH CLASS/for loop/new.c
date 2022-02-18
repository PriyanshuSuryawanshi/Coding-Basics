#include<stdio.h>
int main()
{
    int num, i, reverse, rem;
    printf("Palindrome Number from 1 to 500\n");
    for (num = 1; num <= 500; num++)
    {

        for(reverse=0,i=num;i!=0;i=i/10)
        {
            rem = i % 10;
            reverse = reverse * 10 + rem;
        }
        
        if (num == reverse)
            printf("%d is Palindrome number\n",num);
    }
    return 0;
}