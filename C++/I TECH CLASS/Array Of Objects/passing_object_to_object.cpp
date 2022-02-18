// #include <iostream>
// using namespace std;

// class rectangle
// {
//     public :
//     int length;
//     int breadth;
//     rectangle(int l,int b)
//     {length=l;
//     breadth=b;
//     }

//     void getdata(rectangle r)
//     {
//         length=r.length;
//         breadth=r.breadth;
//     }
//     int printArea()
// 		{
// 			return length * breadth;
// 		}
// };

// int main() {

//     rectangle r1(4,7);
//     rectangle r2(7,2);
//     r2.getdata(r1);
//     cout << "Area of Rectangle 1" << r1.printArea() << "\n";        
//     cout << "Area of Rectangle 2" << r2.printArea() << "\n";

// return 0;
// }

#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		Rectangle( int l, int b )
		{
			length = l;
			breadth = b;
		}
        Rectangle(){}
        void getRectangle(Rectangle r)
        {
            length = r.length;
			breadth = r.breadth;
        }
		int printArea()
		{
			return length * breadth;
		}
};

int main()
{
	Rectangle rt1( 10, 5 );
    Rectangle rt2;
	rt2.getRectangle (rt1);
	cout << "Area of first rectangle " << rt1.printArea() << endl;
	cout << "Area of second rectangle " << rt2.printArea() << endl;
	return 0;
}