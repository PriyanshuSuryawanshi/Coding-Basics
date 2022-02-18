//               ***USING while LOOP***

// #include <stdio.h>
// int main() {
 
//     int num,m;
//     printf("Enter Your Number\n");
//     scanf("%d",&num);
//     m=1;
    
//       while(m<=10){
//           printf("%d x %d =%d\n",num,m,num*m);
//           m++;
//       }
 
// return 0;
// }

// *****USING for LOOP

#include <stdio.h>
int main() {
 
    int num,m;
    printf("Enter Your Number\n");
    scanf("%d",&num);
        for(m=1;m<11;m++) {
            printf("%d x %d = %d\n",num,m,num*m);
            }   
 
return 0;
}