#include <iostream>
using namespace std;

class students
{
    protected : 
    int Rollnumber;
    string stdname;
};

class frontrow : public students
{
    public:
    int totalmarks;
    void showinfo(int rl,int tm,string name)
    {
        Rollnumber=rl;
        totalmarks=tm;
        stdname = name;
        cout << Rollnumber << "\n";
        cout << totalmarks << "\n";
        cout << name << "\n";
    }
};

int main() {

    frontrow f1;
    f1.showinfo(12,555,"Ramesh");

return 0;
}