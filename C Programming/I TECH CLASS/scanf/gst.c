#include <stdio.h>

void main() {
    float cp,gst;
    printf("Enter The cost price of product\n");
    scanf("%f",&cp);
    gst = cp * 0.18;
    printf("Enter The Total Cost is %f\n",cp+gst);
}
