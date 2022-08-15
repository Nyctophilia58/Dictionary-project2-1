#include<stdio.h>
int main()
{
    int test,array[100],count,i;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&array[i]);
        }
        int p=1,q=n;
        while(q>p && array[p+1])
        {
            p++;
        }
        while(q>p && array[q-1])
        {
            q--;
        }
        printf("%d\n",q-p);
    }
    return 0;
}
