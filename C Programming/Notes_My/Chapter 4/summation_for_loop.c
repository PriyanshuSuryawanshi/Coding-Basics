#include <stdio.h>
int main() {
 
    int i,sum=0,num;
    printf("Enter Your Number\n");
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        sum+=i;
    }
    printf("%d",sum);
 
return 0;
}
