#include<stdio.h>
int main()
{
    int i,Test,n,z,t,r,arr[2002];
    scanf("%d",&Test);
    while(Test--)
    {
        scanf("%d%d",&n,&z);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        r = 0;
        for(i=0;i<n;i++)
        {
            t = arr[i];
            t = t | z;
            if(t>r)
            {
                r=t;
            }
        }
        printf("%d\n",r);
    }
    return 0;
}
