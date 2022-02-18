#include <iostream>
using namespace std;

void strcatx(char *ptr1,char *ptr2)
{
    int length = 0;
    for (int i = 0; *ptr1!='\0'; i++,ptr1++)
    {
        
    }
    for (int i = 0; *ptr2!='\0'; i++,ptr1++,ptr2++)
    {
        *ptr1 = *ptr2;
    }
    *ptr1 = '\0';
}

int main()
{
    char n[50],n1[50];
    char *p = &n[0];
    char *p1 = &n1[0];

    cout << "Enter the string ";
    cin >> n;
    cout << "Enter the string 2 ";
    cin >> n1;
    
    strcatx(p,p1);
    cout << "String after concatenation is ";
    cout << n;
    
    return 0;
}