#include <stdio.h>
#include <string.h>

int main() {
 char ch1[30],ch2[30],ch3[30],ch4[30];
 printf("Enter The First String\n");
 gets(ch1);
 printf("Enter The Second String\n");
 gets(ch2);

 printf("\n\n1st String is : %s\n",ch1);
 printf("2nd String is : %s\n",ch2);

 printf("Length of 1st string is %d\n",strlen(ch1));
 printf("Length of 2nd string is %d\n",strlen(ch2));

 strcpy(ch3,ch2);
 printf("3rd String(copied fron 2nd string) is : %s\n",ch2);
 
 strcpy(ch4,ch1);
 strcat(ch4,ch2);
 printf("After joining 2 string we get: %s\n",ch4);

 strrev(ch1);
 printf("Reverse of 1st String is : %s\n",ch1);
 strrev(ch1);

 strlwr(ch1);
 printf("1st String in lowercase is : %s\n",ch1);

 strupr(ch1);
 printf("1st String in uppercase is : %s\n",ch1);

 if(strcmp(ch2,ch3)==0)
 {
    printf("Sting 2 and String 3 are equal\n");
 }
 else{
     printf("Sting 2 and String 3 are not equal\n");
 }

 return 0;
}