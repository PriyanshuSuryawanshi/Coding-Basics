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

void create()
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
        } 
        else
        {
            previous->link = current;
            previous = current;
            current->link = start;
        }
    }
}

void display()
{
    p = start;
    cout << p->data << endl;
    p = p->link;
    while (p != start)
    {
        cout << p->data << endl;
        p = p->link;
    }
}

int main()
{
    create();
    create();
    create();
    display();
    
    return 0;
}