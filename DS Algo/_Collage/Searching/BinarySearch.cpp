#include <stdio.h>

int main()
{
  int a[20],n,i,item,found=0,beg,end,mid;
  printf("Enter number of elemets:");scanf("%d",&n);
 
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
 
  printf("\nYour array :");
 
  for(i=0;i<n;i++)
  printf("\t%d",a[i]);
  printf("\nEnter item to search:");scanf("%d",&item);
 
  beg=0;
  end=n-1;

  while(beg<=end)
  {
    mid=(beg+end)/2;
    if(a[mid]==item)
    {
      found=1;
      printf("Item found at %d position",mid+1);
      break;
    }

    else if(a[mid]>item)
    end=mid-1;

    else
    beg=mid+1;
  }

  if(found==0)

  printf("SORRY!! ITEM NOT PRESENT IN YOUR ARRAY");

}