#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%lld",&n);
        int a[n],sum=0;
        for(9int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        if(sum%2==n%2)
            printf("maomao90\n");
        else
            printf("errorgorn\n");
    }
    return 0;
}
