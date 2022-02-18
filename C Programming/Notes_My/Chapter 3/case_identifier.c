// ASCII value of small a-z is 97-122
// and that of Capital A-Z is 65-90
#include <stdio.h>
int main() {
 
    char ch;
    printf("Enter Your Character\n");
    scanf("%c",&ch);
     if(ch>=97 && ch<=122){
         printf("Charater is Lower case\n");
     }
    else if(ch>=65 && ch<=90){
         printf("Charater is Upper case\n");
     }
     else{
         printf("Character You Have entered isn't an Alphabet\n");
     }
 
return 0;
}