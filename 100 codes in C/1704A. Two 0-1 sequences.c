#include <stdio.h>
#include <string.h>

int main()
{
    int x,i,a,b,n,m,t;
    char sa[50],sb[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%s%s",&n,&m,sa,sb);
        i=n-1;
        for(x=m-1;x>0;x--)
        {
            if(sb[x]!=sa[i--])
            {
                break;
            }
        }
        if(x)
        {
            printf("NO\n");
        }
        else
        {
            for(x=i;x>=0;x--)
            {
                if(sa[x]==sb[0])
                {
                    break;
                }
            }
            printf(x>=0?"YES\n":"NO\n");
        }
    }
    return 0;
}
