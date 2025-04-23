// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int listsize,i,j;
     scanf("%d",&listsize);
     int values[listsize]; //declare an array of values
     
     for( i=0;i<listsize;i++)
     {
         scanf("%d",&values[i]); // Taking input from user
     }
     int currIndex;
     int currEndIndex=listsize-1;
     int temp,pass;
     for( pass=1;pass<listsize;pass++)
     {
         for(currIndex=0;currIndex<listsize-1;currIndex++)
         {
             if(values[currIndex]>values[currEndIndex+1])
             {
                 temp=values[currIndex+1];
                 values[currIndex+1]=values[currIndex];
                 values[currIndex]=temp;
             }
         }
         currEndIndex--;
     }
     for(j=0;j<listsize;j++)
     {
         printf("%d",values[j]);
     }
     
    return 0;
}
