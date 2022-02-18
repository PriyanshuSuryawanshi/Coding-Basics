#include <iostream>
using namespace std;

class box
{
    private:
    int length,breadth,height,volume;

    public:
    void setdimensions(int x, int y, int z)
	{
		length = x;
		breadth = y;
		height = z;
        volume = x*y*z;
	}

    void display()
    {
        cout << "Greater Volume = " << volume;
    }

    int operator>(box boxx)
    {
        box temp;
        if(volume > boxx.volume)
        {
        return 1;
        }
        else
        {
        return 0;
        }
    }
};

int main() 
{

    box box1,box2;
    int l1,l2,b1,b2,h1,h2;

    cout << "Enter Length for Box 1 :- ";
    cin >> l1;
    cout << "Enter Breadth for Box 1 :- ";
    cin >> b1;
    cout << "Enter Height for Box 1 :- ";
    cin >> h1;
    box1.setdimensions(l1,b1,h1);

    cout << "Enter Length for Box 2 :- ";
    cin >> l2;
    cout << "Enter Breadth for Box 2 :- ";
    cin >> b2;
    cout << "Enter Height for Box 2 :- ";
    cin >> h2;
    box2.setdimensions(l2,b2,h2);

    if( box1 > box2)
    {
        cout << "Box 1 has greater Volume.\n" ;
    }
    else
    {
        cout << "Box 2 has greater Volume.\n" ;
    }

return 0;
}