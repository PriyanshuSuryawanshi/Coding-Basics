#include <stdio.h>

int main() {
 
    int num,sum,count;
    count=1;
    sum=0;
    printf("Enter The 10 Numbers you Want To Add\n");

    while(count<=10){
    
        scanf("%d",&num);
        sum=sum+num;
        count++;
    }

    printf("The Sum Of These 10 Numbers is %d\n",sum);

}

