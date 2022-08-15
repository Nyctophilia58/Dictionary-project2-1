#include <stdio.h>

int main()
{
    int a,b,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n", a==0?1:a+2*b+1);
    }
    return 0;
}

