#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n,p=0;
scanf("%d %d",&m,&n);
while(n>0 ||m>0)
{
    if(m%10!=n%10)
    {
       if(m%10 > n%10)
       {
          printf("%d",m%10);
          p=1;
          m/=10;
          n/=10;
       }
       else
       {
         printf("%d",n%10);
         p=1;
         m/=10;
         n/=10;
       }
    }
    else
    {
        m/=10;
        n/=10;
    }
}
if(p==0)
{
    printf("-1");
}
}