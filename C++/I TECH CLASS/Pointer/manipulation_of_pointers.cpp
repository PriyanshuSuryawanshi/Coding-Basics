#include <iostream>
using namespace std;

int main() {

    int a=10,*ptr1;
    ptr1 =&a;
    cout << "The value of a is " << a << "\n";
    *ptr1 = (*ptr1)/2;
    cout << "The value of a is " << a << "\n";

return 0;
}