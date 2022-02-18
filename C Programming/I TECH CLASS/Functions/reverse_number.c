#include <stdio.h>

int reverse(int num);
int reverse(int num)
{
    int rem,reverse;

    for(reverse=0;num!=0;num=num/10){
        rem=num%10;
        reverse = reverse*10 + rem;
    }
    return(reverse);
}

int main() {
 int number,ans;
 printf("Enter The Number\n");
 scanf("%d",&number);
 ans=reverse(number);
 printf("%d",ans);
    
}