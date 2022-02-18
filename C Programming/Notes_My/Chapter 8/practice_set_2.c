#include <stdio.h>

int main() {
 
    char first[50],second[50],c;
    int i =0;
    printf("Enter A Word Of String 1\n");
    scanf("%c",&c);
    while(c!='\n')
    {
        first[i]=c;
        scanf("%c",&c);
        i++;
    }
    first[i]='\0';
    printf("Enter A Word Of String 2\n");
    scanf("%s",second);
    printf("Word Of String 1 is %s\n",first);
    printf("Word Of String 2 is %s\n",second);
 
return 0;
}