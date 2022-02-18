#include<stdio.h>
// void stringcopy(char string2[20],char string1[20]);
// void stringcopy(char string2[20],char string1[20])
// {
    
// }
int main() {

    char string1[30],string2[30];
    printf("Enter String\n");
    gets(string1);
    // stringcopy(string2,string1);
    int i;
    for(i=0;string2[i]!='\0';i++)
    {
       string2[i]=string1[i];
    }
    printf("Second String is \n");
    puts(string2);
return 0;
}