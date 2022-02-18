#include <iostream>
using namespace std;

int main() {

    int *p;
    int a;
    a=10;
    p = &a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
    printf("%d\n",a);

return 0;
}