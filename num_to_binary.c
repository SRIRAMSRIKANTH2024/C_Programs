#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n;
 scanf("%d",&n);
 int i=0;
 int *binary =(int*)calloc(32,sizeof(int));
 while(n>0)
 {
  binary[i++]=n%2;
  n=n/2;
  }
for(int j=i-1;j>=0;j--)
{
printf("%d",binary[j]);
}
free(binary);
}
