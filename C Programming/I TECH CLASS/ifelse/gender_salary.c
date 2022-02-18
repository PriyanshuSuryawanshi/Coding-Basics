#include <stdio.h>

void main() {
 
    int gender,graduated,post_graduated;
    int yos;//yos = years of service
        // Gender
        printf("Enter Your Gender [Male = 1/Female = 2]\n");
        scanf("%d",&gender);
        // Years of Experience
        printf("Enter Your Years of Service\n");
        scanf("%d",&yos);
        // Education
        printf("Have You Compeleted Your Graduation[Yes = 1/N0 = 0]\n");
        scanf("%d",&graduated);
        printf("Have You Compeleted Your Post-Graduation[Yes = 1/N0 = 0]\n");
        scanf("%d",&post_graduated);

            if( gender == 1)
            {
                if(yos>=10)
                {
                    if( graduated == 1)
                    {
                        if ( post_graduated == 1)
                        {
                            printf("Your Salary is Rs.15,000/-");
                        }
                        else if ( post_graduated == 0)
                        {
                            printf("Your Salary is Rs.10,000/-");
                        }
                    }
                }
                else if(yos<10)
                {
                    if( graduated == 1)
                    {
                        if ( post_graduated == 1)
                        {
                            printf("Your Salary is Rs.10,000/-");
                        }
                        else if ( post_graduated == 0)
                        {
                            printf("Your Salary is Rs.7,000/-");
                        }
                    }
                }
            }
            else if( gender == 2)
            {
                if(yos>=10)
                {
                    if( graduated == 1)
                    {
                        if ( post_graduated == 1)
                        {
                            printf("Your Salary is Rs.12,000/-");
                        }
                        else if ( post_graduated == 0)
                        {
                            printf("Your Salary is Rs.9,000/-");
                        }
                    }
                }
                else if(yos<10)
                {
                    if( graduated == 1)
                    {
                        if ( post_graduated == 1)
                        {
                            printf("Your Salary is Rs.10,000/-");
                        }
                        else if ( post_graduated == 0)
                        {
                            printf("Your Salary is Rs.6,000/-");
                        }
                    }
                }
            }
}