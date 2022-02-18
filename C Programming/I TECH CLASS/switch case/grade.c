#include <stdio.h>

int main() {
    int num;
    printf("Enter 1 if Your Percentage is between 100 and 90\n");
    printf("Enter 2 if Your Percentage is between 90 and 80\n");
    printf("Enter 3 if Your Percentage is between 80 and 70\n");
    printf("Enter 4 if Your Percentage is between 70 and 60\n");
    printf("Enter 5 if Your Percentage is between 60 and 50\n");
    printf("Enter 6 if Your Percentage is below 50\n");
    scanf("%d",&num);

switch(num){
    case 1:
    printf("Congratulations Your Grade Is A\n");
    break;
    case 2:
    printf("Your Grade Is B\n");
    break;
    case 3:
    printf("Your Grade Is C\n");
    break;
    case 4:
    printf("Your Grade Is D\n");
    break;
    case 5:
    printf("Your Grade Is E\n");
    break;
    case 6:
    printf("Your Grade Is F\nAnd You Have Failed.\n");
    break;
    default:
    printf("Enter A Valid Input\n");
}
 

}