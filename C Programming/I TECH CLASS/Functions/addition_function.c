
#include <stdio.h>

 int add(int num1,int num2);//Function Declaration
 int add(int num1,int num2)
{
    int ans=num1+num2;
    return(ans); 
}//Function Definition

int main() {
    
    int num1,num2;
    printf("Enter Two Numbers To Be Added\n");
    scanf("%d %d",&num1,&num2);
    int addition=add(num1,num2);//Function Call
    printf("%d",addition);
}
