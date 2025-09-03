#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,k;
scanf("%d %d",&n,&k);
char pat[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        pat[i][j]='*';
    }
   
}
for(int i=k-1;i<=n-k;i++)
{
    for(int j=k-1;j<=n-k;j++)
    {
     pat[i][j]='#';
    } 
}
for(int x=k;x<n-k;x++)
{
    for(int y=k;y<n-k;y++)
    {
        pat[x][y]='*';
    }
    
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        printf("%c ",pat[i][j]);
    }
    printf("\n");
}
}
