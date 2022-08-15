#include<stdio.h>
int main()
{
    int t,a,b,p,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        while(a&&b)
        {
            printf("01");
            a--;
            b--;
        }
        while(a)
        {
            printf("0");
            a--;
        }
        while(b)
        {
            printf("1");
            b--;
        }
        printf("\n");
    }
    return 0;
}
