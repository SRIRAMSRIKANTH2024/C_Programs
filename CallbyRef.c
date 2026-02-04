#include<stdio.h>
#include<conio.h>
int add(int *x,int *y);
void main()
{
int a,b,result;
clrscr();
printf("Enter the value of a and b:");
scanf("%d %d",&a,&b);
result=add(&a,&b);
printf("Result is %d\n",result);
getch();
}
int add(int *x,int *y)
{
  return *x+*y;
}
