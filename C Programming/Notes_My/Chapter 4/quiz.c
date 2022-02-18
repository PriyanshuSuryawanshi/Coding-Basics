#include <stdio.h>
int main() {
 
    int i;
    printf("Enter a Number\n");
    scanf("%d",&i);
        while(i<=20){
            if(i>=10){
            printf("%d\n",i);
            i++;}
            else{
                break;
            }
        }
 
return 0;
}