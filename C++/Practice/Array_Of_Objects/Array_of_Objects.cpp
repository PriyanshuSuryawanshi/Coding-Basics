#include <iostream>
using namespace std;

class point
{
    int x;
    int y;
    public:
    void set(int x_coordinate,int y_coordinate)
    {
        x = x_coordinate;
        y = y_coordinate;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    point operator+(point p2)
    {
        point p3;
        p3.x = x+p2.x;
        p3.y = y+p2.y;
        return p3;
    }
};

int main()
{
    point p1,p2,p3;
    p1.set(1,3);
    p2.set(3,1);
    p3 = p1+p2;
    cout << p3.getx() << endl;
    cout << p3.gety() << endl;
    
    return 0;
}