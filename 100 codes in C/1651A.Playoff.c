#include<stdio.h>
#include<math.h>
int main()
{
    int test, n, result;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("1\n");
        }
        else
        {
            result  = pow(2,n)-1;
            printf("%d\n",result);
        }
    }
    return 0;
}
