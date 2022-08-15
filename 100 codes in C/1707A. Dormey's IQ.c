#include<stdio.h>
int main()
{
    int test, n, IQ, i, array[100000], q, array2[100000];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&IQ);
        for(i=0;i<n;i++) {
            scanf("%d", &array[i]);
        }
        q = 0;
        for(i=n-1;i>=0;i--)
        {
            if(array[i]<=q)
            {
                array2[i]=1;
            }
            else if(q<IQ)
            {
                q++;
                array2[i]=1;
            }
            else
            {
                array2[i]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d",array2[i]);
        }
        printf("\n");
    }
    return 0;
}
