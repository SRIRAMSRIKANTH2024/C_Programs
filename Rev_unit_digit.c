#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[20];
int n;
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
    scanf("%d",&a[i]);
}
n=n-1;
for(int j=n;j>=0;j--)
{
    printf("%d ",a[j]%10);
}
} 

/* Input: 
   8
   23 89 4 55 66 61 77 96 
 Output:
   6 7 1 6 5 4 9 3
*/
   