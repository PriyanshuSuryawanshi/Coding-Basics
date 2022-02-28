#include <iostream>
using namespace std;

int count,sum;

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *p,*q,*back,*root,*ne,*top,*p1;

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

void inordertraversal(struct node *root)
{
    if(root!=NULL)
    {
        inordertraversal(root->left);
        cout << root->data << endl;
        inordertraversal(root->right);
    }
}

void preordertraversal(struct node *root)
{
    if(root!=NULL)
    {
        cout << root->data << endl;
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
}

void postordertraversal(struct node *root)
{
    if(root!=NULL)
    {
        postordertraversal(root->right);
        postordertraversal(root->left);
        cout << root->data << endl;
    }
}

int total_no_of_Nodes(struct node *root)
{
    if(root!=NULL)
    {
        total_no_of_Nodes(root->left);
        count++;
        total_no_of_Nodes(root->right);
    }
    return count;
}


int total_no_of_LeafNodes(struct node *root)
{
    if(root!=NULL)
    {
        total_no_of_LeafNodes(root->left);
        if(root->left==NULL && root->right==NULL)
        {
            count++;
        }
        total_no_of_LeafNodes(root->right);
    }
    return count;
}

int total_no_of_Non_LeafNodes(struct node *root)
{
    if(root!=NULL)
    {
        total_no_of_Non_LeafNodes(root->left);
        if(!(root->left==NULL && root->right==NULL))
        {
            count++;
        }
        total_no_of_Non_LeafNodes(root->right);
    }
    return count;
}

int summation_of_Nodes(struct node *root)
{
    if(root!=NULL)
    {
        summation_of_Nodes(root->left);
        sum = sum + root->data;
        summation_of_Nodes(root->right);
    }
    return sum;
}

int main()
{
    create_bst(10);
    create_bst(12);
    create_bst(25);
    create_bst(20);
    create_bst(8);
    // count = 0;
    // cout << total_no_of_Nodes(root) << endl;
    // count = 0;
    // cout << total_no_of_LeafNodes(root) << endl;
    // count = 0;
    // cout << total_no_of_Non_LeafNodes(root) << endl;
    // sum = 0;
    // cout << summation_of_Nodes(root) << endl;
    // inordertraversal(root);
    // cout << "Done" << endl;
    // preordertraversal(root);
    // cout << "Done" << endl;
    // postordertraversal(root);
    // cout << "Done" << endl;

    return 0;
}