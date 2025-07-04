#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char a[100],b[100];
int maxl,stri;
maxl=stri=0;
char common[100]="";
scanf("%s %s",a,b);
// printf("%d",strlen(a));
for(int i=0;i<strlen(a);i++)
 {
    for(int j=0;j<strlen(b);j++)
    {
        int k=0;
        while(a[i+k]==b[j+k] && a[i+k]!='\0' && b[j+k]!='\0')
        {
         k++;
        }
        if(k>maxl)
        {
            maxl=k;
            stri=i;
        }
    }
 }
 strncpy(common,a+stri,maxl);
 common[maxl]='\0';
printf("%s",common);
}
