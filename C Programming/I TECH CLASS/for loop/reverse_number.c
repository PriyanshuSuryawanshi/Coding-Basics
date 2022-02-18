// #include <stdio.h>

// int main() {
 
//     int num,rem,reverse;

//     printf("Enter The Number You Want To Reverse\n");
//     scanf("%d",&num);

//     for(reverse=0;num!=0;num=num/10){
//         rem=num%10;
//         reverse = reverse*10 + rem;
//     }
//     printf("Final The Reverse Of This Number is %d",reverse);
 
// }

#include <stdio.h>
int main() {
    int num,remainder,units,tens,hundreds;
    printf("Enter a 3 Digit Number\n");
    scanf("%d",&num);

        remainder=num%10;
        units =  remainder;
        remainder=(num%100-units)/10;
        tens = remainder;
        remainder=(num%1000-tens-units)/100;
        hundreds = remainder; 

    printf("The Unit's Place Of This Number is %d\n",units);
    printf("The Tens Place Of This Number is %d\n",tens);
    printf("The Hundreds Place Of This Number is %d\n",hundreds );
}