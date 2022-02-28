#include <iostream>
using namespace std;

int top = -1,stack[10],a[10];

void push(int element)
{
    top++;
    stack[top] = element;
}

int pop()
{
    return stack[top--];
}

void swap(int f,int e)
{
    int temp = a[f];
    a[f] = a[e];
    a[e] = temp;
}

void quickSort(int a[],int n)
{
    int l,r,e,f;
    push(0);
    push(n-1);
    do
    {
        r = pop();
        l = pop();
        if(l<r)
        {
            f = l+1;
            e = r;
        }
        do
        {
            while((a[l] > a[f])&&(f<=e))
            f++;
            while((a[l] < a[f])&&(f<=e))
            e--;
            if(f < e)
            swap(f,e);
        }while(f < e);

        swap(f-1,l);
        
        if(l < f-2)
        {
            push(l);
            push(f-2);
        }
        if(f<r)
        {
            push(f);
            push(r);
        }
    }while(top == -1);
}

int main()
{
    // int a[5],num=5;
    // cout << "Enter the Elements : " << endl;
    // for(int i=0;i<num;i++)
    // {
    //     cin >> a[i];
    // }

    int a[5] = { 9, 3, 4, 2, 1 };
    int num=5;
    quickSort(a,5);
    
    for(int i=0;i<num;i++)
    {
        cout << a[i] << "\t";
    }
    
    return 0;
}