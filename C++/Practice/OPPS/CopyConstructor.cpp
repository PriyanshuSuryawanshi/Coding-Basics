#include <iostream>
using namespace std;

class code
{
    int id;
    string name;

    public :
    code(){}
    code(int a){id = a;name ="Ramesh";}
    code(code &x)
    {
        id = x.id;
        name ="Ramesh";
    }
    void display(void)
    {
        cout << id << endl;
        cout << name << endl;
    }
};

int main()
{
    code A(100);
    code B(A);
    code C = A;

    code D;
    D = A;

    cout << "\nid of A : " ; A.display();
    cout << "\nid of B : " ; B.display();
    cout << "\nid of C : " ; C.display();
    cout << "\nid of D : " ; D.display();
    
    return 0;
}