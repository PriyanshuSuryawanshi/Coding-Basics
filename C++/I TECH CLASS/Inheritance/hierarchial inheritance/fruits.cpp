#include <iostream>
using namespace std;

class fruits//parent
{
    public:
    int totalfruits;
    int sum(int a,int b)
    {
        totalfruits = a+b;
        return(totalfruits);
    }
};

class apples: public fruits//child1
{
    public :
    int totalapples;
};

class mangoes: public fruits//child2
{
    public :
    int totalmangoes;
};

int main() {

    apples a;
    a.totalapples = 20;
    mangoes m;
    m.totalmangoes = 30;

    cout << "Total Apples are " << a.totalapples << "\n";
    cout << "Total Mangoes are " << m.totalmangoes << "\n";
    cout << "Total Fruits are " << a.sum(a.totalapples,m.totalmangoes) << "\n";


return 0;
}