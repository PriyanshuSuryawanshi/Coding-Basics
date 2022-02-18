#include <stdio.h>

int main() {
 
    int i,num,rem,reverse;
    for(num=1;num<=500;num++)
    {
        for(reverse=0,i=num;num!=0;num=num/10){
            rem=num%10;
            reverse = reverse*10 + rem;
        }
        if(i==reverse){
        printf("%d is a Armstrong Number\n",i);
        }
        else{
        printf("%d is not a Armstrong Number\n",i);
        }
    }
}