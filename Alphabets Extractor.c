//The program to extract the English alphabetic characters from a string containing a mixture of lowercase, uppercase, and special characters.

#include <stdio.h>
#include<ctype.h>


int main() {
    //Write your code below this line
    int b;
    char str[1000];
    scanf("%d",&b);
    while(b--)
    {
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++)
        {
            if((str[i]>='a'&&str[i]<='z')|| (str[i]>='A'&&str[i]<='Z'))
            printf("%c",str[i]);
        }
        printf("\n");
    }
    
    return 0;
}
