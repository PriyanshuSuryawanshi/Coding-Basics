#include <stdio.h>

void main() {
 
    int cp,sp,difference,profit,loss;
    printf("Enter The Cost Price Of Your Product\n");
    scanf("%d",&cp);
    printf("Enter The Selling Price Of Your Product\n");
    scanf("%d",&sp);
    difference = sp - cp;
    // printf("Difference = %d\n",difference);
        if(difference>0){
        printf("You have Earned a Profit in this deal\n");
        printf("Profit = Rs.%d\n",difference);
        }
        else if(difference<0)
        {
        printf("You have Incurred a Loss in this deal\n");
        printf("loss = Rs.%d\n",-1*difference);
        }
        else if(difference==0)
        {
        printf("You have Not gained Profit nor Incurred Loss in this deal\n");
        } 
    
}