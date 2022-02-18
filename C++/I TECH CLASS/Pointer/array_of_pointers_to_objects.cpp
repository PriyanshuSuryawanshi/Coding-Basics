#include <iostream>
#include <cstring>

using namespace std;

class city
{
    protected: 
        char *name;
        int len;
    public:
        city()
        {
            len = 0;
            name = new char[len+1];
        }
        void getname(void)
        {
            char *s;
            s = new char[30];

            cout << "Enter City Name: ";
            cin >> s;
            len = strlen(s);
            name = new char[len+1];
            strcpy(name,s);
        }
        void printname(void)
        {
            cout << name << "\n";
        }
};

int main() {

    city *cptr[10];

    int n,option;

    for(n=1,option=1;option==1;n++)
    {
        cptr[n] = new city;
        cptr[n]->getname();
        cout <<"Do you want to enter one more name?\n1=Yes,0=No\n";
        cin >> option;
    }

    for(int i=1;i<=n;i++)
    {
        cptr[i]->printname();
    }

return 0;
}