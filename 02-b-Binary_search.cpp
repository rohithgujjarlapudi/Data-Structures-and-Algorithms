#include <iostream>
using namespace std;
int main() 
{
  int i,ar[100],n,x,low,high,mid;
  cout<<"Enter the number of elements in array";
  cin>>n;
  cout<<"Enter the elements of the array in ascending order";
  for(i=0;i<n;i++)
    cin>>ar[i];
  cout<<"Enter the element that needs to be searched";
  cin>>x;
  low=0;
  high=n-1;
  while(low<=high){
    mid=(low+high)/2;
    if(ar[mid]==x)
    {
      cout<<"The element is found at position  "<<mid+1;
      return 0;}
    else if(x<ar[mid])
      high=mid-1;
    else if(x>ar[mid])
      low=mid+1;
  }
  return 0;
}
