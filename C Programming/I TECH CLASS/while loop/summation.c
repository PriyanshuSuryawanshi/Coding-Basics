
// Method 1

// #include <stdio.h>

// void main() {
 
//     int i,num,summation;
//     i=1;
//     summation=0;
//     printf("Enter The Number Upto Which You Want Summation\n");
//     scanf("%d",&num);
//         while(i<=num)
//         {
//             summation = i+summation;
//             i++;
//         }
//         printf("%d\n",summation);
 
// }

// Method 2

#include <stdio.h>

void main() {
 
    int i,num,summation;
    i=1;
    summation=0;
    printf("Enter The Number Upto Which You Want Summation\n");
    scanf("%d",&num);
        while(i<=num)
        {
            summation = num+summation;
            num--;
        }
        printf("%d\n",summation); 
}