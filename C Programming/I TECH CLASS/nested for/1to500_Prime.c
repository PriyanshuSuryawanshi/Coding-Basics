#include <stdio.h>

int main() {
 
    int i, num, prime;

    for(num=1;num<=500;num++)
    {
        for(i = 2, prime = 1;i<num;i++)
        {
            if (num % i == 0)
            {   
                prime = 0;
                break; 
            }
        }   
            if (prime == 1 && num!=1)
        {
            printf("%d is a prime number\n", num);
        }
    }
 
return 0;
}