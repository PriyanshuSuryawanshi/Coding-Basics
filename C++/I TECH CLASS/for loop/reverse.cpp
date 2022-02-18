#include <iostream>
using namespace std;

int main() {

    int i,num,rem,rev;
    cout << "Enter The Number ";
    cin >> num;

    for(rev=0;num!=0;num=num/10)
    {
        rem = num%10;
        rev = rev*10 + rem;
    }

    cout << "Reverse is " << rev;

return 0;
}