#include <stdio.h>
int main() 
{
  int i,ar[100],n,x,low,high,mid;
  printf("Enter the number of elements in array\n");
  scanf("%d",&n);
  printf("Enter the elements of the array in ascending order\n");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  printf("Enter the element that needs to be searched\n");
  scanf("%d",&x);
  low=0;
  high=n-1;
  while(low<=high){
    mid=(low+high)/2;
    if(ar[mid]==x)
    {printf("The element is found at position: %d",mid+1);
      return 0;}
    else if(x<ar[mid])
      high=mid-1;
    else if(x>ar[mid])
      low=mid+1;
  }
  return 0;
}
