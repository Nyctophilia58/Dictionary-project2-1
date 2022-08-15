#include<stdio.h>
#include<math.h>
int main()
{
    int test,a,b,array[100000],i;
    float d;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&a, &b);
        d = sqrt(a*a+b*b);
        if(d==0)
        {
            printf("0\n");
        }
        else if(d*100 == (int)d*100)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}
