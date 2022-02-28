#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *p,*q,*back,*root;

struct stack
{
    struct stack *right;
    struct stack *data;
    struct stack *left;
};

struct stack *ne,*top,*p1;

void create_bst(int element)
{
    if(root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node*));
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
        q = (struct node *)malloc(sizeof(struct node*));
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

void push(struct stack *R)
{
    ne = malloc(sizeof(struct stack));
    if(ne == NULL)
    {
        printf("Stack is Full");
    }
    else
    {
        ne->data = R;
        ne->right = top;
    }
}

struct stack *pop()
{
    if (top==NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        p1 = top->right;
        return (top->data); 
    }
}

// void disply(struct node *root)
// {
//     p = root;
//     do
//     {
//         while(p!=NULL)
//         {
//             push(p);
//             top = ne;
//             p = p->left;
//         }
//         if(top != NULL)
//         {
//             p = pop();
//             printf("%d",p->data);
//             free(top);
//             top = p1;
//             p = p->right;
//         }
//     }while(p!=NULL || top!=NULL);
// }

void disply(struct node *root)
{
    if(root!=NULL)
    {
        disply(root->left);
        printf("%d\n",root->data);
        disply(root->right);
    }
}

void revdisply(struct node *root)
{
    if(root!=NULL)
    {
        disply(root->right);
        printf("%d\n",root->data);
        disply(root->left);
    }
}

int main()
{
    create_bst(10);
    create_bst(5);
    create_bst(3);
    create_bst(4);
    create_bst(20);
    create_bst(30);
    create_bst(25);
    create_bst(27);
    create_bst(23);
    disply(root);
    printf("Done\n");
    revdisply(root);
    
    return 0;
}