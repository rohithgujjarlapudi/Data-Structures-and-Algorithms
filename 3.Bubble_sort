#include <stdio.h>
int main() {
  int a[100],n,temp,i,j;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  printf("Enter the elements in the array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("The elements after sorting is\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
  }
