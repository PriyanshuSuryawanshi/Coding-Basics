#include <iostream>
using namespace std;

struct Node
{
    struct Node *prelink;
    int data;
    struct Node *link;
};

struct Node *current;
struct Node *start;
struct Node *previous;
struct Node *p;
struct Node *endNode;

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
           start->prelink = NULL;
           start->link = NULL;
        } 
        else
        {
            previous->link = current;
            current->prelink = previous;
            previous = current;
            endNode = current;
            current->link = NULL;
        }
    }
}

void display()
{
    p = start;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->link;
    }
}

void reverseDisplay()
{
    p = endNode;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->prelink;
    }
}

int main()
{
    create();
    create();
    create();
    // display();
    reverseDisplay();
    
    return 0;
}