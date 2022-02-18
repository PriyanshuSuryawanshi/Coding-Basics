#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int s[10];
int top = -1;

int main()
{
    int i,j,d1,d2,val;
    char str[40];
    cout << "Enter Prefix Expression : ";
    cin >> str;

    strrev(str); 

    cout << str << endl;

    for(i=0;str[i]!='\0';i++)
    {
        switch(str[i])
        {
            case '/' :
            j=1;break;

            case '*' :
            j=2;break;

            case '+' :
            j=3;break;

            case '-' :
            j=4;break;

            case '$' :

            case '^' :
            j=5;break;

            default :
            j=0;
            d1 = str[i] - '0';
            top++;
            s[top] = d1;
        }
        if(j)
        {
            d2 = s[top];
            top--;
            d1 = s[top];
            // top--;
        
            switch(j)
            {
                case 1 :
                val = d2 / d1;
                break;

                case 2 :
                val = d2 * d1;
                break;

                case 3 :
                val = d2 + d1;
                break;

                case 4 :
                val = d2 - d1;
                break;

                case 5 :
                val = pow(d2,d1);
                break;
            }
            // top++;
            s[top] = val;
            cout << val << endl;
        }
    }

    cout << "Ans = " << s[top] << endl;
    top--;
    
    return 0;
}