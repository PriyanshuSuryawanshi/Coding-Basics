#include <iostream>
using namespace std;

class Numbers 
{
    private:
	int num1,num2,num3;

    public:
	void setnumbers(int x, int y, int z)
	{
		num1 = x;
		num2 = y;
		num3 = z;
	}

	void display()
	{
		cout << "Division of 1st numbers is " << num1 << "\n";
        cout << "Division of 2nd numbers is " << num2 << "\n";
        cout << "Division of 3rd numbers is " << num3 << "\n";
	}

	Numbers operator/(Numbers t)
	{
		Numbers temp;
		temp.num1 = num1 / t.num1;
		temp.num2 = num2 / t.num2;
		temp.num3 = num3 / t.num3;
		return (temp);
	}
};

int main()
{
	Numbers t1, t2, t3;
    int a1,b1,c1,a2,b2,c2;

    cout << "Enter First number ";
    cin >> a1;
    cout << "Enter Second number ";
    cin >> b1;
    cout << "Enter Third number ";
    cin >> c1;
    t1.setnumbers(a1,b1,c1);

    cout << "Enter First number ";
    cin >> a2;
    cout << "Enter Second number ";
    cin >> b2;
    cout << "Enter Third number ";
    cin >> c2;
	t2.setnumbers(a2,b2,c2);

	t3 = t1 / t2;

	t3.display();

	return 0;
}