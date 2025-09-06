#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
int num=0,val=0,count=0;
while(n>0)
{
  int digit=n%10;
  if(count==0)
  {
    if(digit==1)
    {
      val=digit;
      num=num+val;
      count++;    
    }
    else
    {
      val=digit;
      num=num+val;
      count++;    
    }
  } 
  else
  {
    if(digit==1)
    {
      count=count+count;
      val=count+val;
      num=val;
    }
    else
    {
     count=count+count;
     val=val;
    }   
  }
  n/=10;
}
printf("%d",num);
}

