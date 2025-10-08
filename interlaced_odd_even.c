#include<stdio.h>
void main()
{
	int a,b,v1,v2,i,j,k;
	scanf("%d %d",&a,&b);
	i=a;
	v1=a;
	v2=b;
	while(i>=a && i<=b)
	{
		if(a%2==0)
		{
			j=v2;
			k=v1;
			for(;j>=a;)
			{
				if(j%2==0)
				{
				printf("%d ",j);
			    v2=j-1;
			    break;
				}
				else
				{
					v2=j-1;
					break;
				}
			}
			for(;k<=b;)
			{
				if(k%2==1)
				{
					printf("%d ",k);
					v1=k+1;
					break;
				}
				else
				{
					v1=k+1;
					break;
				}
			}
		}
		
		if(a%2==1||(a%2==0&&b%2==1))
		{
			k=v1;
		    j=v2;
			for(;k<=b;)
			{
				if(k%2==1)
				{
					printf("%d ",k);
					v1=k+1;
					break;
				}
				else
				{
					v1=k+1;
					break;
				}
			
			}
			for(;j>=a;)
			{
				if(j%2==0)
				{
					printf("%d ",j);
					v2=j-1;
					break;
				}
				else
				{
					v2=j-1;
					break;
				}
			}
		}
		i++;
	}
}
