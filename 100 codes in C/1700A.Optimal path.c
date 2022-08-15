#include<stdio.h>
int main()
{
    int test;
    int n,m, i;
    scanf("%d",&test);
    while(test--)
    {
        long long int  sum = 0;
        scanf("%d%d",&n,&m);
        sum = (m * (m+1))/2;
        for(i=2;i<=n;i++)
        {
            sum = sum + i*m;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

