#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(!(a<=d && c<=b))
        {
            printf("%d\n", a+c);
        }
        else
        {
            printf("%d\n", (a>c)?a:c);
        }
    }
    return 0;
}
