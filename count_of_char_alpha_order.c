#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
char a[50],i;
int count[26]={0};
fgets(a,50,stdin);
for(i=0;a[i]!='\0';i++)
{
    char ch=tolower(a[i]);
    if(ch>='a' && ch<='z')
    {
        count[ch-'a']++;
    }
}
for(i=0;i<26;i++){
    if(count[i]>0)
    {
    
        printf("%c:%d ",i+'a',count[i]);
    }
}

}
