#include <iostream>
using namespace std;

class space{

    int x;
    int y;
    int z;
    public :
        void getdata(int a,int b,int c);
        void display();
        void operator-();
        };

        void space ::  getdata(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }

        void space ::  display()
        {
            cout << x << " ";
            cout << y << " ";
            cout << z << "\n";
        }

        void space ::  operator-()
        {
            x = -x;
            y = -y;
            z = -z;
        }


int main() {

    space s1;
    s1.getdata(10,-20,30);
    cout << " s : ";
    s1.display();

    -s1;

    cout << " s : ";
    s1.display();

return 0;
}