#include<stdio.h>
int main()
{
    int test,n,a[100],i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("%d\n",a[n-1]);
    }
    return 0;
}
