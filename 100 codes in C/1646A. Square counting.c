#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long n,s;
        scanf("%lld%lld",&n,&s);
        printf("%lld\n",s/(n*n));
    }
    return 0;
}

