#include <stdio.h>
int summation(int number);
int main() {
 
 int number;
    printf("Enter number upto which you want summation\n");
    scanf("%d",&number);
    printf("Summation of Natural numbers upto %d is %d\n",number,summation(number));
return 0;
}

int summation(int number){
    if(number>0){
    return number + summation(number-1);}
}