#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int c[n][2],x,y,rwx,clx,rwy,cly;
int arr[5][5]={{0,11,12,1,0},
               {10,0,0,0,2},
               {9,0,0,0,3},
               {8,0,0,0,4},
               {0,7,6,5,0}};
for(int p=0;p<n;p++)
{
    for(int q=0;q<2;q++)
    {
    scanf("%d",&c[p][q]);
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<2;j++)
    {
        if(j==0)
        x=c[i][j];
        if(j=1)
        y=c[i][j];
        
    }
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
          if(arr[i][j]==x)
          {
            rwx=i;
            clx=j;
          }
          if(arr[i][j]==y)
          {
            rwy=i;
            cly=j;
          }
      }
      
  }
  int temp;
   temp=arr[rwx][clx];
   arr[rwx][clx]=arr[rwy][cly];
   arr[rwy][cly]=temp;
}
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(arr[i][j]==0)
        {
            printf("* ");
        }
        else
        {
        printf("%d ",arr[i][j]);
        }
    }
    printf("\n");
}
}