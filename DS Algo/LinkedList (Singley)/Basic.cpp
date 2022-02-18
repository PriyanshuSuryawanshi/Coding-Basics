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

void insert()
{
    int location,count=1;
    cout << "You Want To Insert An Element at which position : ";
    cin >> location;
    p = start;
    
    // while(p != NULL)
    // {
    //     if(count<location)
    //     {
    //         p = p->link;
    //     }
    //     else if(count==location)
    //     {
    //         struct Node *temp;
    //         cout << "Enter The Element You Want To Insert : ";
    //         cin >> temp->data;
    //         temp->link = p->link;
    //         p->link = temp; 
    //         break;           
    //     }
    //     count++;
    // }

    for(p=start;p != NULL;p = p->link,count++)
    {
        if(count==location)
        {
            struct Node *temp;
            cout << "Enter The Element You Want To Insert : ";
            cin >> temp->data;
            temp->link = p->link;
            p->link = temp; 
            break;           
        }
    }
}

void insert_at_start()
{
    struct Node *temp;
    temp = new Node;
    struct Node *neww;
    neww = new Node;
    cout << "Enter The Element You Want To Insert At Start : ";
    cin >> temp->data;
    temp->link = start;
    neww = start;
    start = temp;
    temp = neww;
    // cout << "DONE\n";
}

void deleteNode()
{
    int number;
    cout << "Enter the Number of Node You want to Delete : ";
    cin >> number;
    if(number==1) // Delete Fron Start
    {
        start=start->link;
    }
    else if(number>1) // Delete From middle or end
    {
        p = start;
        int count = 1;
        while (p != NULL)
        {
            if(count==number)
            {
                previous->link = p->link;
            }
            else
            {
                previous=p;
                p = p->link;
            }
            count++;            
        }
    }
}

int main()
{
    // create();
    // create();
    // create();
    // create();
    // // display();
    // // insert();
    // display();
    // // insert_at_start();
    // deleteNode();
    // display();

    int input;
        cout << "Enter 1 to Create A Node " << endl;
        cout << "Enter 2 to Insert A Node " << endl;
        cout << "Enter 3 to Insert A Node at Start " << endl;
        cout << "Enter 4 to Display the LinkedList " << endl;
        cout << "Enter 5 to Delete A Node " << endl;
    while(1)
    {
        
        cin >> input;
        switch (input)
        {
        case 1:
            create();
            break;

        case 2:
            insert();
            break;
        
        case 3:
            insert_at_start();
            break;

        case 4:
            display();
            break;

        case 5:
            deleteNode();
            break;

        }
    }
    
    return 0;
}