#include <stdio.h>

int main() {
 
    int wingsize;
    printf ("Enter the Wingsize of Butterfly : ");
    scanf("%d",&wingsize);
    for(int i=1;i<=wingsize;i++)
    {
        for(int j=1;j<=wingsize*2;j++)
        {
            if(j<=i || j>(wingsize*2 - i)){printf("* ");}
            else{printf("  ");}
        }
        printf("\n");
    }

    for(int i=wingsize;i>=1;i--)
    {
        for(int j=wingsize*2;j>=1;j--)
        {
            if(j<=i || j>(wingsize*2 - i)){printf("* ");}
            else{printf("  ");}
        }
        printf("\n");
    }
 
return 0;
}