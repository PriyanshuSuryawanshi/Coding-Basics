#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int front=0,rear=0,size=5;
    int input,element,i;
    while(1)
    {
        cout << "Enter 1 to add an Element" << endl;
        cout << "Enter 2 to delete an Element" << endl;
        cout << "Enter 3 to Display" << endl;

        cin >> input;

        switch(input)
        {
            case 1 : //add
                
                rear = (rear + 1) % size;
                if(rear != front)
                {
                    cin >> element;
                    arr[rear] = element;
                }
                else
                {
                    cout << "Queue is Full" <<endl;
                }
                break;
                
            case 2 : //Delete
                if(front!=rear)
                {
                    front = (front + 1)%size;
                }
                else
                {
                    cout << "Queue is Empty" << endl;
                }
                break;

            case 3 : //Display
                if(front == rear)
                {
                    cout << "Queue is Empty" << endl;
                }
                else 
                {
                    if((front + 1) == size)
                    {
                        i=0;
                    }
                    else 
                    {
                        i=front+1;
                    }
                    for(;i!=rear+1;i=(i+1)%size)
                    {
                        cout << arr[i] << endl;
                    }
                }
                break;
        }
    
    }
    return 0;
}