#include <iostream>
using namespace std;

int count = 0;

class alpha{
    public:
    alpha ()
    {
        count++;
        cout << "\nNo. of object created " << count;
    }
    ~alpha ()
    {
        cout << "\nNo. of object destroyed " << count;
        count--;
    }
};

int main() {

    cout << "\n\nENTER MAIN\n";
    alpha a1,a2,a3,a4;
    {
        cout << "\n\nENTER BLOCK1\n";
        alpha a5;
    }

    {
        cout << "\n\nENTER BLOCK2\n";
        alpha a6;
    }

    cout << "\n\nRE-ENTER MAIN\n";

return 0;
}