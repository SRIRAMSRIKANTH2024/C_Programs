#include<stdio.h>
#include<conio.h>
int add(int x,int y);
void main()
{
int a,b,result;
clrscr();
printf("Enter the value of a and b:");
scanf("%d %d",&a,&b);
result=add(a,b);
printf("Result is %d\n",result);
result=add(10,20);
printf("Result is %d",result);
getch();
}
int add(int x,int y)
{
  return x+y;
}
