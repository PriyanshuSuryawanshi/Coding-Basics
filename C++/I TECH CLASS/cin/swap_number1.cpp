#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter the 1st Number : ";
    cin >> a;
    cout << "Enter the 2nd Number : ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "1st Number is : " << a << "\n";
    cout << "2nd Number is : " << b << "\n";

    return 0;
}