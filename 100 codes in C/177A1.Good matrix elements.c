#include<stdio.h>
int main()
{
    int n,i,j,array[5][5],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==(n-1)/2 || j==(n-1)/2 || i==j || i+j==n-1)
            {
                sum = sum + array[i][j];
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
