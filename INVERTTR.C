#include <stdio.h>
#include<conio.h>
int main() {
    int n,i,space,j;
    clrscr();
    printf("Enter N vlaue:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
	for(space=n-i;space>0;space--)
	{
	    printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	    printf("* ");
	}
	printf("\n");
    }
    getch();
    return 0;
}