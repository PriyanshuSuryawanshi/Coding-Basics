#include <iostream>
using namespace std;

class marks{
    public :
    int phy;
    int chem;
    int maths;

    int ttlmarks()
    {
        int ttl = phy + chem +maths;
        return(ttl);
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
    students s[3];
    
    for(int i=0;i<3;i++)
    {
    cout << "\nEnter the Roll no of Student ";
    cin >> s[i].rollno;
    cout << "Enter the Name of Student ";
    cin >> s[i].name;
    cout << "Enter the Marks in Physics ";
    cin >> p;
    s[i].phy = p;
    cout << "Enter the Marks in Chemistry ";
    cin >> c;
    s[i].chem = c;
    cout << "Enter the Marks in Maths ";
    cin >> m;
    s[i].maths = m;
    }

    for(int i=0;i<3;i++)
    {
    cout << "\nRoll number of student is " << s[i].rollno << "\n";
    cout << "Name of student is " << s[i].name << "\n";
    cout << "Total marks of Student is " << s[i].ttlmarks() << "\n";
    }

return 0;
}