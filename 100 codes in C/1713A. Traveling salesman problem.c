#include <stdio.h>

int min(int a, int b)
{
    return a<b?a:b;
}

int max(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int test,n,i,j,xp,xb,yp,yb;
    scanf("%d",&test--);
    while(T--)
    {
        scanf("%d",&n);
        xp=xb=yp=yb=0;
        while(n--)
        {
            scanf("%d%d",&i,&j);
            if(i==0 && j<0)
            {
                yb = min(yb,j);
            }
            if(i==0 && j>0)
            {
                yp = max(yp,j);
            }
            if(i<0 && j==0)
            {
                xb = min(xb,i);
            }
            if(i>0 && j==0)
            {
                xp = max(xp,i);
            }
        }
        printf("%d\n",2*(yp-yb+xp-xb));
    }
    return 0;
}


