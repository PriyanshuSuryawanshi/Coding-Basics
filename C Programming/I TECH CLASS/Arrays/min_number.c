#include <stdio.h>

int main() {
 
    int a[5],i;
    printf("Enter The 5 Numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    if(a[0]<a[1] && a[0]<a[2] && a[0]<a[3] && a[0]<a[4]){
        printf("%d is the Smallest Number\n",a[0]);
    }
    else if(a[1]<a[0] && a[1]>a[2] && a[1]>a[3] && a[1]>a[4]){
        printf("%d is the Smallest Number\n",a[1]);
    }
    else if(a[2]<a[0] && a[2]>a[1] && a[2]>a[3] && a[2]>a[4]){
        printf("%d is the Smallest Number\n",a[2]);
    }
    else if(a[3]<a[0] && a[3]>a[1] && a[3]>a[2] && a[3]>a[4]){
        printf("%d is the Smallest Number\n",a[3]);
    }
    else if(a[4]<a[0] && a[4]>a[1] && a[4]>a[2] && a[4]>a[3]){
        printf("%d is the Smallest Number\n",a[4]);
    }
    else{
        printf("Don't Enter The Same Numbers\n");
    }
}