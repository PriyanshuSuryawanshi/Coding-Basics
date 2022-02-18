#include <stdio.h>

void printodd(int num);
void printodd(int num){
    int i,odd;
    for(i=1;i<=num;i++){
        printf("%d\n",2*i-1);
    }

}

void main(){
int n;
printf("Enter The Number Of Odd Numbers You Want To Print\n");
scanf("%d",&n);
printodd(n);
}