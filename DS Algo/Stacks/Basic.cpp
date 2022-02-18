#include <iostream>
using namespace std;

int main()
{
    int arr[10],input,element;
    int top = -1;

    while(1)
    {
    cout << "Enter 1 to PUSH an Element" << endl;
    cout << "Enter 2 to POP an Element" << endl;
    cout << "Enter 3 to DisplayStack" << endl;
    cout << "Enter 4 to ReverseDisplayStack" << endl;
        cin >> input;

        switch(input)
        {
            case 1 :
            if(top!=9)
            {
            cout << "Enter the Element you want to add" << endl;
            cin >> element;
            top++;
            arr[top] = element;
            break;
            }
            else 
            {
                cout << "STACK is Full" << endl;
                break;
            }

            case 2 :
            if(top!=-1)
            {
                cout << arr[top] << endl;
                top--;
                break;
            }
            else 
            {
                cout << "STACK is empty" << endl;
                break;
            }

            case 3 :
            cout << "Stack is : " << endl;
            for(int i=top;i>=0;i--)
            {
                cout << arr[i] << endl;
            }
            break;

            case 4 :
            cout << "Reverse Stack is : " << endl;
            for(int i=0;i<=top;i++)
            {
                cout << arr[i] << endl;
            }
            break;
        }
    }
    return 0;
}