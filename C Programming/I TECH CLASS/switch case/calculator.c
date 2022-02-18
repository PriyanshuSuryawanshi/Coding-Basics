#include <stdio.h>

int main() {
 
    int operation,a,b;
    int i,factorial,prime,summation;

    printf("Enter The Two Numbers\n");
    scanf("%d %d",&a,&b);

    printf("Press 1 For Addition\n");
    printf("Press 2 For Subtraction\n");
    printf("Press 3 For Multiplication\n");
    printf("Press 4 For Division\n");
    printf("Press 5 To Exit The Programme\n");
    printf("Press 6 To Get Factorial\n");
    printf("Press 7 To Start Prime Checker\n");
     printf("Press 8 To Get Summation\n");
    scanf("%d",&operation);

    switch (operation) {
        case 1:
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case 2:
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case 3:
            printf("%d x %d = %d\n",a,b,a*b);
            break;    
        case 4:
            printf("%d / %d = %d\n",a,b,a/b);
            break;
        case 5:
            printf("You Have Chosen To Exit The Programme\n");
            break;
        case 6:   
            
                for(factorial=1,i=1;i<=a;i++)
                {
                    factorial=factorial*i;
                }   
                printf("Factorial of %d is %d\n",a,factorial);

                for(factorial=1,i=1;i<=b;i++)
                {
                    factorial=factorial*i;
                }   
                printf("Factorial of %d is %d\n",b,factorial);
                break;
        case 7:
                 for(i = 2, prime = 1;i<a;i++)
                {
                    if (a % i == 0)
                    {   
                        prime = 0;
                        break;
                    }
                
                }   
                    if (prime == 0)
                {
                    printf("%d is not a prime number\n", a);
                }
                else
                {
                    printf("%d is a prime number\n", a);
                }

                for(i = 2, prime = 1;i<b;i++)
                {
                    if (b % i == 0)
                    {   
                        prime = 0;
                        break;
                    }
                
                }   
                    if (prime == 0)
                {
                    printf("%d is not a prime number\n", b);
                }
                else
                {
                    printf("%d is a prime number\n", b);
                }
                break;
            case 8:
            for(i=1,summation=0;i<=a;i++)
            {
                summation=i+summation;
            }
            printf("Summation of %d is %d\n",a,summation);

            for(i=1,summation=0;i<=b;i++)
            {
                summation=i+summation;
            }
            printf("Summation of %d is %d\n",b,summation);
            break;

        default:
            printf("Operation You Have Entered Is not Valid\n");
            break;
    }

}
