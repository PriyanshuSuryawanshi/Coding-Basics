#include <iostream>
using namespace std;

int main() {

    int num[5];
    int *ptr;
    int i;

    cout << "Enter 5 Values of the Array\n";
    for(i=0;i<5;i++)
    {
        cin >> num[i];
    }
    ptr = num;

    cout << "\nValue of ptr : " << *ptr << "\n";
    ptr++;
    cout << "Value of ptr++ : " << *ptr << "\n";
    ptr--;
    cout << "Value of ptr-- : " << *ptr << "\n";
    ptr = ptr+2;
    cout << "Value of ptr+2 : " << *ptr << "\n";
    ptr = ptr-1;
    cout << "Value of ptr-1 : " << *ptr << "\n";
    ptr += 3;
    cout << "Value of ptr+=3 : " << *ptr << "\n";
    ptr -= 2;
    cout << "Value of ptr-=2 : " << *ptr << "\n";

return 0;
}