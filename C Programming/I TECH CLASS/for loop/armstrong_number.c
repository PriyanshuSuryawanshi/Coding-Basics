#include <stdio.h>

int main() {
 
    int i,num,rem,reverse;

    printf("Enter The Number You Want To Reverse\n");
    scanf("%d",&num);
    i=num;

    for(reverse=0;num!=0;num=num/10){
        rem=num%10;
        reverse = reverse*10 + rem;
    }
    
    if(i==reverse){
    printf("%d is a Armstrong Number",i);
    }
    else{
    printf("%d is not a Armstrong Number",i);
    }
}