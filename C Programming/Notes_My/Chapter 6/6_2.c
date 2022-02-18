#include <stdio.h>
void address(int a);
void address(int a)
{
    printf("Address of i using function is %u\n",&a);

}
int main() {
 
    int i;
    i=3;
    printf("Address of i without function is %u\n",&i);
    address(i);
return 0;
}