#include<stdio.h>
int main()
{
    int t,c,p,j,m,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&c);
        p=0;
        while(c!=0)
        {
            m=c%10;
            c=c/10;
            p=p+1;
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=4;j++)
            {
                if(i==m && j==p)
                {
                    c=c+j;
                    break;
                }
                c=c+j;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}


