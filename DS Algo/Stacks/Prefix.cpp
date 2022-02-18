#include <iostream>
#include <string.h>

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
    char output[40];
    int i,j,ptr=0;
    char str[40],x;
    cout << "Enter Infix Expression" << endl;
    cin >> str;

    strrev(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
        {
            str[i]=')';
        }

        else if(str[i]==')')
        {
            str[i]='(';
        }
    }

    cout << str << endl;

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
                output[ptr] = x;
                ptr++;
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
            output[ptr] = str[i];
                ptr++;
            break;
        }
        if(j>0)
        {
            if(top!=-1)
            {
                while (j<=stack[top].p)
                {
                    cout << stack[top].item;
                    output[ptr] = stack[top].item;
                    ptr++;
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
        output[ptr] = stack[top].item;
            ptr++;
        top--;
    }
    
    output[ptr] = '\0';
    
    cout << endl;
    strrev(output);
    for(int l=0;l<=ptr;l++)
    {
        cout << output[l];
    }

    return 0;
}