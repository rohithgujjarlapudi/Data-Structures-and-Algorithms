#include <stdio.h>

int main() {
  int i,j,temp,n=5;
  int ar[7]={1,5,6,7,2};
  
  
  for(i=0;i<n;i++){
    temp=ar[i];
    j=i-1;
    while(i>=0 && ar[j]>temp){
      ar[j+1]=ar[j];
      j--;
    }
    ar[j+1]=temp;
  }
  for(i=0;i<n;i++){
  
  printf("%d",ar[i]);
    }
  return 0;
  
  
}
