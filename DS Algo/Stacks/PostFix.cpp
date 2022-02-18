#include <iostream>
using namespace std;

struct s
{
    char item;
    int p;
};

struct s stack[50];
int top = -1;

int main()
{
    int i,j;
    char str[40],x;
    cout << "Enter Infix Expression" << endl;
    cin >> str;

    for(i=0;str[i]!='\0';i++)
    {
        switch (str[i])
        {
        case '(':
            j=0;top++;
            stack[top].item=str[i];
            stack[top].p=j;
            break;
        
        case ')':
            j=0;
            x = stack[top].item;
            top--;
            while (x!='(')
            {
                cout << x;
                x = stack[top].item;
                top--;
            }
            break;
        
        case '+':
        case '-':
            j=1;break;
        case '*':
        case '/':
            j=2;break;
        case '$':
        case '^':
            j=3;break;
        default:
            j=0;
            cout << str[i];
            break;
        }
        if(j>0)
        {
            if(top!=-1)
            {
                while (j<=stack[top].p)
                {
                    cout << stack[top].item;
                    top--;
                }
            }
            top++;
            stack[top].item = str[i];
            stack[top].p = j;
        }
    }

    while(top!=-1)
    {
        cout << stack[top].item;
        top--;
    }
    
    return 0;
}