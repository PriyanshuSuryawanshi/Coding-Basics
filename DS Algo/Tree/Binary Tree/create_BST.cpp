#include <iostream>
using namespace std;

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *p,*q,*back,*root;

void create_bst(int element)
{
    if(root == NULL)
    {
        root = new node;
        root->data = element;
        root->left = root->right = NULL;
    }
    else
    {
        p = root;
        while(p != NULL)
        {
            back = p;
            if(element < p->data)
            {
                p = p->left;
            }
            else
            {
                p = p->right;
            }
        }
        q = new node;
        q->right = q->left = NULL;
        q->data = element;
        if(element < back->data)
        {
            back->left = q;
        }
        else
        {
            back->right = q;
        }
    }
}

int main()
{
    create_bst(10);
    create_bst(25);
    cout << "Done";
    
    return 0;
}