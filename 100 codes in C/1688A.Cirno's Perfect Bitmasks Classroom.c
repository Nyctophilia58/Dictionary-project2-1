#include<stdio.h>
int main()
{
    int test,n,i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        i=n&-n;
        while(n==i || (n&i)==0)
        {
            i++;
        }
        printf("%d\n",i);
    }
    return 0;
}
