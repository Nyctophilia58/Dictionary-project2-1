#include<stdio.h>
int main()
{
    int t,n,i,j,a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a[0]=n;
        for(j=1;j<n;j++)
        {
            a[j]=j;
        }
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}
