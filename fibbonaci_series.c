#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
unsigned long long f1=0,f2=1,f3;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    if(i==0)
    f3=f1;
    else if(i==1)
    f3=f2;
    else
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf("%llu ",f3);
}
}
