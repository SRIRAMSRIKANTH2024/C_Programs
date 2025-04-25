//The a program to calculate the sum of the digits present in an alphanumeric string.

#include <stdio.h>
#include<ctype.h>


int main() {
    //Write your code below this line
    int t;
    char a[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        int sum=0;
        for(int i=0;a[i]!='\0';i++)
        {
           char ch=a[i];
           if(ch>='0'&&ch<='9')
           sum+=a[i]-'0';
        }
        printf("%d\n",sum);
    }
    return 0;
}
