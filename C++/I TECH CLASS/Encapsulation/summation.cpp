#include <iostream>
using namespace std;

class numbers
{
    private:
    int a,b,sum;

    public:
    void seta(int x)
    {
        a=x;
    }
    void setb(int y)
    {
        b=y;
    }
    int getsum()
    {
        sum = a + b;
        return sum;
    }

};

int main() {
    int p,q;

    numbers set1;
    // set1.seta(5);
    // set1.setb(10);
    cout << "Enter the value of a ";
    cin >> p;
    set1.seta(p);
    cout << "Enter the value of b ";
    cin >> q;
    set1.setb(q);

    cout << set1.getsum();


return 0;
}