#include <iostream>
using namespace std;

int count = 0;

class alpha
{
    public :
    alpha()
    {
        count++;
        cout << "No. of object created " << count << endl;
    }
    ~alpha()
    {
        cout << "No. of object drestroyed " << count << endl;
        count--;
    }
};

int main()
{
    cout << "\n\nENTER MAIN\n";
    alpha a1,a2,a3,a4,a5;

    {
        cout << "Enter Block 1" << endl;
        alpha A5;
    }

    {
        cout << "Enter Block 2" << endl;
        alpha A6;
    }

    cout << "/n/nRE-ENTER MAIN/n" << endl;
    
    return 0;
}