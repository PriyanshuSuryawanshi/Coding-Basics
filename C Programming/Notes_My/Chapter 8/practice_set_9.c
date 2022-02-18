#include <stdio.h>

int main() {
 
    char input[50],check;
    int i=0,count=0;
    printf("Enter The String\n");
    gets(input);
    printf("Enter The Character You want to Check\n");
    scanf("%c",&check);

    while(input[i]!='\0')
    {
        if(input[i]==check)
        {
            count++;
        }
        i++;
    }
    
    printf("'%c' is Present in the string %d Times\n",check,count);
    
 
return 0;
}