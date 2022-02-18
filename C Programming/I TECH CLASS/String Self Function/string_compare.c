#include<stdio.h>

int main() {

    char string1[30],string2[30];
    printf("Enter String 1\n");
    gets(string1);
    printf("Enter String 2\n");
    gets(string2);

    int i,same;
    for(i=0;string1[i]!='\0' || string2[i]!='\0';i++)
    {
       if(string1[i]==string2[i] && string2[i]==string1[i])
       {
           same=1;
       }
       else if(string1[i]!=string2[i] && string2[i]!=string1[i])
       {
           same=0;
           break;
       }
    }
    if(same==1)
    {
        printf("Both stings are same\n");
    }
    else if(same==0)
    {
        printf("Both stings are not same\n");
    }
return 0;
}