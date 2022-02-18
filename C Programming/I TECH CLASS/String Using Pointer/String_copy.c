#include <stdio.h>
void stringcopy(char*,char*);
void stringcopy(char *s1,char *s2)
{
    while(*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}

int main() {
    char s1[20],s2[20];
    printf("Enter String 2\n");
    gets(s2);
    stringcopy(s1,s2);
    printf("1st String is '%s'\n",s1);
return 0;
}