#include <stdio.h>
float farenheit(int a);
int main() {
    int celsius,a;
    printf("Enter temp in Celsius\n");
    scanf("%d",&celsius);

    printf("The value of %d celsius in fahenheit is %f",celsius,farenheit(celsius));
 
return 0;
}
float farenheit(int a){

    float result;
    result = (float) (a*9/5)+32;
    return result; 

}