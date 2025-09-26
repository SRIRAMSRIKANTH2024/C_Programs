#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c,k;
scanf("%d %d",&r,&c);
char arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        scanf(" %c",&arr[i][j]);
    }
}
scanf("%d",&k);
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(arr[i][j]=='|')
        {
          for(int x=0;x<k;x++)
          printf("%c",arr[i][j]);
        }
        else
        printf("%c",arr[i][j]);
    }
    printf("\n");
}
}
