// i have written %d,But to be precise it could have been %f
// and also in place of int i could hvae written float to get info in decimals

#include <stdio.h>
int main() {
    
    int phy, chem, math, percent;
    printf("Enter Your Physics Marks\n");
    scanf("%d",&phy);
    printf("Enter Your Chemistry Marks\n");
    scanf("%d",&chem);
    printf("Enter Your Maths Marks\n");
    scanf("%d",&math);

    percent = ((phy+chem+math)*100/300);
    printf("Your Overall Percentage is %d\n",percent);
        if(percent>=40 && phy>=33 && chem>=33 && math>=33){
            printf("You Have Passed!\n");
        }
            
            else{
                printf("You Haved Failed\n");
            }
 return 0;
}