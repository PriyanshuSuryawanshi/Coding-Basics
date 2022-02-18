#include <stdio.h>

void main() {
 //ti = total items,tp = total price,sp = single item's price
    float ti,tp,sp;
     printf("Enter The Number of items\n");
     scanf("%f",&ti);
     printf("Enter The Total Price of items\n");
     scanf("%f",&tp);
     sp = tp/ti;
     printf("The Cost of single Product is %f",sp);

}