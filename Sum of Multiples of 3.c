//The a program to find the sum of all the numbers in the array that are multiples of 3.


#include <stdio.h>


int main() {
    //Write your code below this line
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
        if(a[i]%3==0)
        {
          
          sum+=a[i];
        }
        
      
    }
    printf("%d\n",sum);
    }
    
    
    return 0;
}
