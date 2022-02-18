#include <iostream>
using namespace std;

void strcopyx(char *ptr1,char *ptr2)
{
    int length = 0;
    for (int i = 0; *ptr1!='\0'; i++,ptr1++,ptr2++)
    {
        *ptr2 = *ptr1;
    }
    *ptr2 = '\0';
}

int main()
{
    char n[50],n1[50];
    char *p = &n[0];
    char *p1 = &n1[0];

    cout << "Enter the string ";
    cin >> n;
    strcopyx(p,p1);
    cout << "Copied String is ";
    cout << n1;
    
    return 0;
}