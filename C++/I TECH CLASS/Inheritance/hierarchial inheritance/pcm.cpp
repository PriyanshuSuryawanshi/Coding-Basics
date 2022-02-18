#include <iostream>
using namespace std;

class marks{
    public :
    int phy;
    int chem;
    int maths;

    int ttlmarks(int phy,int chem,int maths)
    {
        int ttl = phy + chem +maths;
        return(ttl);
    }
    float average(int a,int b)
    {
        float average = (a+b)/2;
        return (average);
    }
};

class students : public marks
{
    public:
    int rollno;
    string name;
};

int main() {

    int p,c,m;
    students s1,s2;
    cout << "Enter the Roll no of Student ";
    cin >> s1.rollno;
    cout << "Enter the Name of Student ";
    cin >> s1.name;
    cout << "Enter the Marks in Physics ";
    cin >> p;
    s1.phy = p;
    cout << "Enter the Marks in Chemistry ";
    cin >> c;
    s1.chem = c;
    cout << "Enter the Marks in Maths ";
    cin >> m;
    s1.maths = m;

    cout << "Enter the Roll no of Student ";
    cin >> s2.rollno;
    cout << "Enter the Name of Student ";
    cin >> s2.name;
    cout << "Enter the Marks in Physics ";
    cin >> p;
    s2.phy = p;
    cout << "Enter the Marks in Chemistry ";
    cin >> c;
    s2.chem = c;
    cout << "Enter the Marks in Maths ";
    cin >> m;
    s2.maths = m;

    cout << "Roll number of student is " << s1.rollno << "\n";
    cout << "Name of student is " << s1.name << "\n";
    cout << "Total marks of Student is " << s1.ttlmarks(s1.phy,s1.chem,s1.maths) << "\n";

    cout << "Roll number of student is " << s2.rollno << "\n";
    cout << "Name of student is " << s2.name << "\n";
    cout << "Total marks of Student is " << s2.ttlmarks(s2.phy,s2.chem,s2.maths) << "\n";

return 0;
}