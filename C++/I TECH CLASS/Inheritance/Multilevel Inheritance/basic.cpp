#include <iostream>
using namespace std;

class gparent
{
    public :
    void myfunction()
    {
        {
            cout << "Contents in Grandparent class";
        }
    }
};

class parent : public gparent
{

};

class child : public parent
{

};

int main() {

    child myobj;
    myobj.myfunction();

return 0;
}