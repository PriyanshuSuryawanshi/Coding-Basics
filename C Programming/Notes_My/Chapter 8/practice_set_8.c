#include <stdio.h>

int main() {
 
    char input[50],check;
    int i=0,flag=0;
    printf("Enter The String\n");
    gets(input);
    printf("Enter The Character You want to Check\n");
    scanf("%c",&check);

    while(input[i]!='\0')
    {
        if(input[i]==check)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("NO '%c' is Not Present in the string\n",check);
    }
    else
    {
        printf("Yes '%c' is Present in the string\n",check);
    }
 
return 0;
}