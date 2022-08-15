#include<stdio.h>

int main()
{
    int test,n,array[100000],i,max,min;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        min = 0;
        max = 0;
        for(i=0;i<n;i++)
        {
            if(array[i]>array[max])
            {
                max = i;
            }
            if(array[min]>array[i])
            {
                min = i;
            }
        }
        printf("%d %d\n",min+1,max+1);
    }
    return 0;
}
