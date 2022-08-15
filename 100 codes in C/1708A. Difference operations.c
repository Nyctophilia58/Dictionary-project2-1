#include<stdio.h>

int main()
{
    int i, array[100], test, n, o;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        o = 1;
        for(i=0;i<n;i++)
        {
            if(array[i]%array[0])
            {
                printf("%d\n",array[i]%array[0]);
                o = -1;
            }
        }
        if(o==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
