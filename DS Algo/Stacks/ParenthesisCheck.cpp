#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    char s[size];
    int top = -1;

    char expr[size];
    int i,j;
    cout << "Enter expression : ";
    cin >> expr;
    for(i=0;expr[i]!='\0';i++)
    {
        if(expr[i]=='[' || expr[i]=='(' || expr[i]=='{')
        {
            top++;
            s[top]=expr[i];
        }
        if( expr[i]==']' && s[top]!= '[' ||
            expr[i]==')' && s[top]!= '(' ||
            expr[i]=='}' && s[top]!= '{')
        {
            cout << expr << endl;
            for(j=0;j<i;j++)
            {cout << " ";}
            cout << "*" << endl;
            break;
        }
        if( expr[i]==']' && s[top]== '[' || 
            expr[i]==')' && s[top]== '(' || 
            expr[i]=='}' && s[top]== '{')
        {
            top--;
        }
    }

    if(expr[i]=='\0' && top == -1)
    {
        cout << "Expression is valid" << endl;
    }
    else
    {
        cout << "Expression is not valid" << endl;
    }
    
    return 0;
}