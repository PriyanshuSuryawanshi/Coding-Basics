#include <stdio.h>

float divide(float num1,float num2);
float divide(float num1,float num2)
{
    float ans=num1/num2;
    return(ans);
    //printf("%f / %f = %f\n",num1,num2,num1/num2);
}

void main() {
float a,b;
    printf("Enter Two Numbers To Be Divided\n");
    scanf("%f %f",&a,&b);
    float division =divide(a,b);
    printf("%f",division);
}

