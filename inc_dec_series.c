#include<stdio.h>
#include<stdlib.h>

int main()
{
  
  int N,K,result;
  scanf("%d %d",&N,&K);
  int x=1,count=1,st,end,c=0;
  while(x>0)
  {
      if(x==1)
      {
          st=1;
          end=N;
          count++;
      }
      else
      {
         if(count%2==0)
         {
             st=count*N;
             end=end++;
             count++;
         }
         else
         {
             st++;
             end=count*N;
             count++;
         }
      }
      if(count%2==0)
      {
          for(int i=st;i<=end;i++)
          {
              if(i>0)
              c++;
              
            //   printf("%di ",i);
              if(c==K)
              result=i;
          }
          
      }
      else
      {
          for(int i=st;i>end;i--)
          {
              if(i>0)
              c++;
              
            //   printf("%d ",i);
          
              if(c==K)
              {
                  result=i;
              }
          }
      }
     x++;
     
     if(c>K)
     break;
     
  }
  printf("%d",result);
}
