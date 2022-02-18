#include <stdio.h>

void main() {
 
    int a,b,c;
    printf("Enter The Value of First Angle\n");
    scanf("%d",&a);
    printf("Enter The Value of Second Angle\n");
    scanf("%d",&b);
    printf("Enter The Value of Third Angle\n");
    scanf("%d",&c);
        if(a+b+c==180)
        {
            printf("Yes it is a Triangle\n");
        }
        else{
            printf("No it is not a Triangle\n");
        }

}