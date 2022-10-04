#include <iostream>
using namespace std;
int main() {
  int a[100],n,temp,i,j;
  cout <<"Enter the number of elements in the array"<<endl;
  cin >> n;
  cout <<"Enter the elements in the array"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
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
  cout<<"The elements after sorting is"<<endl;
  for(i=0;i<n;i++)
    cout<<a[i];
  return 0;
  }
