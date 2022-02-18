#include <stdio.h>

int main() {
 
    int stock,order,credit;
    stock=50;

    printf("Enter the Quantity of Your order\n");
    scanf("%d",&order);
    printf("Is your credit OK?\n(1 for yes,0 for no)\n");
    scanf("%d",&credit);

    if(order<=stock && credit==1)
    {
        printf("Your Order for %d products has been placed\n",order);
    }
    else if(credit==0)
    {
        printf("Your Order is not placed\nBecause Credit is not ok\n");
    }
    else if(order>=stock && credit==1)
    {
        printf("Your Order for %d products has been placed\n",stock);
        printf("Order for remaining %d products will be placed when they will be back in stock\n",order-stock);
    }

 
return 0;
}