#include<stdio.h>
void main()
{
int n,i,j;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
// Duplicates removing pocess
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
  if(arr[i]==arr[j])
  {
  for(int k=j;k<n;k++)
  {
  arr[k]=arr[k+1];
  }
  j--;
  n--;
  }
  }
  }
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);
  }
  
