#include <iostream>
using namespace std;

int main() {

    int i,num,input,rem,rev;
    cout << "Enter The Number ";
    cin >> num;
    input = num;

    for(rev=0;num!=0;num=num/10)
    {
        rem = num%10;
        rev = rev*10 + rem;
    }

    if(input==rev)
    {
    cout << rev << " is Palindrome";
    }
    else
    {
    cout << rev << " is not Palindrome";
    }

return 0;
}