#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter The Age Of Ramesh\n");
    scanf("%d",&a);
    printf("Enter The Age Of Suresh\n");
    scanf("%d",&b);
    printf("Enter The Age Of Shyam\n");
    scanf("%d",&c);
        if(a>b && a>c)
        {
            printf("Ramesh is the Eldest\n");
        }
        else if(b>a && b>c)
         {
            printf("Suresh is the Eldest\n");
        }
        else if(c>a && c>b)
        {
            printf("Shyam is the Eldest\n");
        }
        else
        {
            printf("You Have Entered Same Ages For More than one person");
        }
}