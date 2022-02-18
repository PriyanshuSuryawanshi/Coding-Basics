#include <stdio.h>

void main() {
    int n=8,num;
    printf("Enter The Number\n");
    scanf("%d",&num);
    if (num>8)
        printf("Number is Greater than 8\n");
    else if(num<8)
        printf("Number is less than 8\n"); 
    else
        printf("Your number is correct");      
}
