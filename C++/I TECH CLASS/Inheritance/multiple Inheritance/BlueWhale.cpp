#include <iostream>
using namespace std;

class Mammals
{
    public:
    void myfunction()
    {
        cout << "I am a Mammal\n";
    }
};

class Marineanimals
{
    public:
    void myfunction2()
    {
        cout << "I am a Marine Animal\n";
    }
};

class BlueWhale: public Mammals,public Marineanimals
{
    public:
    void myfunction3()
    {
        cout << "I am both, a Mammal as well as a Marine Animal\n";
    }

};

int main() {

    Mammals mammal1;
    Marineanimals manimal1;
    BlueWhale bluewhale1;

    mammal1.myfunction();
    manimal1.myfunction2();
    bluewhale1.myfunction3();
    bluewhale1.myfunction();
    bluewhale1.myfunction2();

return 0;
}