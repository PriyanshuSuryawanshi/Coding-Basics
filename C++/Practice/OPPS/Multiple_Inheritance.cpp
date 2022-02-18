#include <iostream>
using namespace std;

class MyClass
{
    public : 
    void myfunction()
    {
        cout << "Some content in grandparent class" << endl;
    }
};

class MyClass2 
{
    public : 
    void myfunction2()
    {
        cout << "Some content in parent class" << endl;
    }
};

class MyClass3 : public MyClass,public MyClass2
{
    public :
};

int main()
{
    MyClass3 myobj;
    myobj.myfunction();
    myobj.myfunction2();

    return 0;
}