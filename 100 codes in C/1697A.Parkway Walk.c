#include<stdio.h>
int main()
{
    int t,i,sum=0;;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        sum = 0;
        for(i=0;i<n;++i)
        {
            int x;
            scanf("%d",&x);
            sum = sum+x;
        }
        if(m>sum)
        {
            printf("0\n");
        }
        else{
            printf("%d\n",sum-m);
        }
    }
    return 0;
}
