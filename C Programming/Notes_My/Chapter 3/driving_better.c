#include <stdio.h>
int main(){

    int a;
    printf("Enter your age\n");
    scanf("%d",&a);

    if(a>=18 && a<80){
        printf("You can drive.Enjoy!!\n");
    }
    else{
        printf("You cannot drive");
    }

   return 0;
    }