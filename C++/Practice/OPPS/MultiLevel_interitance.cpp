#include <iostream>
using namespace std;

class MyClass
{
    public : 
    void myfunction()
    {
        cout << "Some content in grandparent class";
    }
};

class MyClass2 : public MyClass
{
    public : 
    void myfunction()
    {
        cout << "Some content in parent class";
    }
};

class MyClass3 : public MyClass2
{
    public : 
    void myfunction()
    {
        cout << "Some content in child class";
    }
};

int main()
{
    MyClass3 myObj;
    myObj.myfunction();
        
    return 0;
}