#include <stdio.h>
void change(int b);
int main() {
    int b = 344;
    printf("Value of b before change is %d\n",b);
    change(b);
    printf("Value of b after change is %d\n",b);
    
 
return 0;
}

void change(int b){
    b = 77;
}
// It will not change the value of b because both b are different 
// one b is of main function and other b is of void function