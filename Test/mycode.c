#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	
    float *area=malloc(n*sizeof(float)); 
    for(int i = 0;i<n;i++,tr++,area++)
    {
        float p;
        p = ((float)tr->a+(float)tr->b+(float)tr->c)/2;
        *area = p*(p-tr->a)*(p-tr->b)-(p-tr->c);   
    }
    
    for(int count=0;count<n;count++)
    {
        for(int i = 1;i<n-count;i++)
        {
            if(area[count]>area[i+count])
            {
                int temp;
                temp = area[count];
                area[count] = area[i+count];
                area[i+count] = temp;
                
                temp=tr[count].a;
                tr[count].a=tr[i+count].a;
                tr[i+count].a=temp;
                
                temp=tr[count].b;
                tr[count].b=tr[i+count].b;
                tr[i+count].b=temp;
                
                temp=tr[count].c;
                tr[count].c=tr[i+count].c;
                tr[i+count].c=temp;
                
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}