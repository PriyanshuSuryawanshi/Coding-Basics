#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int front =0,rear=-1;
    int input,element;
    while(1)
    {
        cout << "Enter 1 to add an Element" << endl;
        cout << "Enter 2 to delete an Element" << endl;
        cout << "Enter 3 to Display" << endl;
        cout << "Enter 4 to ReverseDisplayQueue" << endl;
        cout << "Enter 5 to add an Element from Start           " << endl;
        cout << "Enter 6 to delete an Element from End" << endl;
            cin >> input;

        switch(input)
        {
            case 1 : //add
            if(rear!=9)
            {
                rear++;
                cin >> element;
                arr[rear] = element;
            }
            else
            {
                cout << "Queue is Full" << endl;
            }
            break;
            
            case 2 : //Delete
            if(front<rear)
            front++;
            else
            {
                cout << "Queue is Empty" << endl;
            }
            break;

            case 3 : //Display
            for(int i = front;i<=rear;i++)
            {
                cout << arr[i] << endl;
            }
            break;
            
            case 4 : //Reverse Display
            for(int i = rear;i>=front;i--)
            {
                cout << arr[i] << endl;
            }
            break;

            case 5 : //Add from end
            
        }
    }

    return 0;
}