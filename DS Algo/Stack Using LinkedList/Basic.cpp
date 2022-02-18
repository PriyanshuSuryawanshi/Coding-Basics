#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node *current;
struct Node *start;
struct Node *previous;
struct Node *p;
struct Node *top;

void push()
{
    current = new Node;
    if(current!=NULL)
    {
        cout << "Enter Element : ";
        cin >> current->data;

        if(start == NULL)
        {
            start = current;
            previous = current;
            current->link = NULL;
            top = current;
        } 
        else
        {
            current->link = previous;
            previous = current;
            top = current;
        }
    }
}

void pop()
{
    top = top->link;
}

void display()
{
    p = top;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->link;
    }
    cout << endl;
}

int main()
{
    int input;
    while(1)
    {
        cout << "Enter 1 to Push An Element " << endl;
        cout << "Enter 2 to Pop An Element " << endl;
        cout << "Enter 3 to Display Stack of LinkedList " << endl;
        
        cin >> input;
        switch (input)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;

        }
    }
    
    return 0;
}