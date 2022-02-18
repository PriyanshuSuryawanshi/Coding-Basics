#include <stdio.h>
int main(){

    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    int pass;
    printf("Do you have a VIPpass? [1 for yes/any number for no]\n");
    scanf("%d",&pass);

    if(a>=18 && a<80 || pass == 1 ){
        printf("You can drive.Enjoy!!\n");
    }
    else{
        printf("You cannot drive");
    }

   return 0;
    }