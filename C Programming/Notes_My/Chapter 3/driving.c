#include <stdio.h>
int main(){

    int a;
    printf("Enter your age\n");
    scanf("%d",&a);

    if(a<18){
        printf("You cannot drive, You are underage\n");
    }

    else{
        if(a>=80){
            printf("You cannot drive,You are a senior citizen\n");
        }

        else{
            printf("You can drive.Enjoy!!\n");
        }
        return 0;
    }}