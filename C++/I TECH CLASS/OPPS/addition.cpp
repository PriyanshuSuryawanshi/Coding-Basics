#include <iostream>
using namespace std;

class number
{
    public:
        int add(int a,int b);
};
int add(int a,int b)
{
    int sum;
    sum = a + b;
    return(sum);
}

int main() {

    int a,b;

    cout << "Enter 1st Number ";
    cin >> a;
    cout << "Enter 2nd Number ";
    cin >> b;
    cout << "Addition Sum is " << add(a,b);

return 0;
}