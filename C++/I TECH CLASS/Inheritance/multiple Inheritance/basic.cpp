#include <iostream>
using namespace std;

class parent1
{
    public:
    void myfunction()
    {
        cout << "Contents in Parent Class 1.\n";
    }
};

class parent2
{
    public:
    void myfunction2()
    {
        cout << "Contents in Parent Class 2.\n";
    }
};

class child : public parent1,public parent2
{

};

int main() {

    child object;
    object.myfunction();
    object.myfunction2();

return 0;
}