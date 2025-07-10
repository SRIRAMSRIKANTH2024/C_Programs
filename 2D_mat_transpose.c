#include<stdio.h>
int N;

void printTranspose(int *ptr)
{
    int col=N;
    int row=N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",*(ptr +j * col+i));
        }
        printf("\n");
    }
}
int main()
{
scanf("%d",&N);
int matrix[N][N];
for(int i=0;i<N;i++)
{
for(int j=0;j<N;j++)
{
scanf("%d",&matrix[i][j]);
}
}
printTranspose((int *)matrix);
return 0;
}  
