#include <iostream>
using namespace std;
typedef void (*Funptr)(int,int);
void add(int i,int j)
{
    cout << i << "+" << j << "=" << i+j << "\n";
}
void subtract(int i,int j)
{
    cout << i << "-" << j << "=" << i-j << "\n";
}

int main() {

    Funptr ptr;
    ptr = &add;
    ptr(1,2);
    ptr = &subtract;
    ptr(4,2);

return 0;
}