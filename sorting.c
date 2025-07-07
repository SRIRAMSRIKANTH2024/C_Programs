#include<stdio.h>
int main()
{
int a;
printf("Enter a num a:");
scanf("%d",&a);
int b[a];
for(int i=0;i<a;i++)
{
printf("enter b[%d]:",i);
scanf("%d",&b[i]);
}
// Ascending order
for(int pass=0;pass<a-1;pass++)
{
for(int j=0;j<a-pass-1;j++)
{
if(b[j]>b[j+1])
{
int temp=b[j];
b[j]=b[j+1];
b[j+1]=temp;
}
}
}
printf("Ascending Order: ");
for(int k=0;k<a;k++)
printf("%d ",b[k]);
printf("\n");

// Descending Order
for(int pass=0;pass<a;pass++)
{
for(int j=0;j<a-pass-1;j++)
{
if(b[j]<b[j+1])
{
int temp=b[j];
b[j]=b[j+1];
b[j+1]=temp;
}
}
}
printf("Descending Order: ");
for(int k=0;k<a;k++)
printf("%d ",b[k]);


return 0;
}

