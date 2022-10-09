#include<stdio.h>
int main()
{
    int test, b, t;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%d%d",&b,&t);
        b = b+t;
        if(b%2)
        {
            printf("Burenka\n");
        }
        else
        {
            printf("Tonya\n");
        }
    }
    return 0;
}
