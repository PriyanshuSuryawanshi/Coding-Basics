#include <stdio.h>
void sumandaverage(int a,int b,int *sum,float *average)
{ 
    *sum = a+b;
    *average = (float)(*sum)/2;
    // printf("Value of sum is %d\n",*sum);
    // printf("Value of average is %f\n",*average);
}
int main() {
    int a=10,b=20,sum;
    float average;
    sumandaverage(a,b,&sum,&average);
    printf("Value of sum is %d\n",sum);
    printf("Value of average is %f\n",average);
return 0;
}