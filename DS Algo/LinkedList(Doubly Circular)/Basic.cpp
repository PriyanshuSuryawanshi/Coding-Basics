#include <iostream>
using namespace std;

struct Node
{
    struct Node *prelink;
    int data;
    struct Node *link;
};

struct Node *current;
struct Node *previous;
struct Node *start;
struct Node *endNode;
struct Node *p;

void create()
{
    current = new Node;
    if (current != NULL)
    {
        cout << "Enter Element : ";
        cin >> current->data;
        if(start == NULL)
        {
            current->prelink = NULL;
            current->link = NULL;
            start = current;
            previous = current;
        }
        else
        {
            previous->link = current;
            current->prelink = previous;
            current->link = NULL;
            previous = current;
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