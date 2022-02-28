// #include <stdio.h>
// void armstrongcheck(int num);
// void armstrongcheck(int num)
// {
//     int i,rem,reverse;
//     i=num;
//     for(reverse=0;num!=0;num=num/10){
//         rem=num%10;
//         reverse = reverse*10 + rem;
//     }
//     if(i==reverse){
//     printf("%d is a Palindrome Number\n",i);
//     }
//     // else{
//     // Palindromef("%d is not a Palindrome Number\n",i);
//     // }
// }
// int main() {
//     int i,num,rem,reverse;
//     for(num=1;num<=500;num++)
//     {
//     armstrongcheck(num);
//     }
// }

#include <stdio.h>

int main() {
    int num;
    
    for(num=1;num<=500;num++)
    {
       int i,rem,reverse,input;
        i=num;
        input = i;
        for(reverse=0;i!=0;i=i/10)
        {  
            rem=i%10;
            reverse = reverse + rem*rem*rem;
        }
        if(input==reverse)
        {
        printf("%d is a palindrome\n",input);
        }
        
    }
    return 0;
}