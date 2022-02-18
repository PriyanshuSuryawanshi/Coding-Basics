#include <stdio.h>
int main() {
    
    int income;
    printf("Enter Your Income\n");
    scanf("%d",&income);
    printf("Your Income Is %d\n",income);

         if(income<250000){
            printf("You Have To Pay No Taxes(You are either Poor or a Businessman)\n");
        }
        
        if(income>=250000 && income<500000){
            printf("You have to pay Tax of Rs.%d\n",((income-250000)*5)/100);
        }

        if(income>=500000 && income<1000000){
            printf("You have to pay Tax of Rs.%d\n",(((income-500000)*20)/100)+12500);
        }

        if(income>=1000000){
            printf("You have to pay Tax of Rs.%d\n",(((income-1000000)*30)/100)+12500+100000);
        }
       

return 0;
}