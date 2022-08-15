#include<stdio.h>
int main()
{
    int test,point;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&point);
        if(point==1)
        {
            printf("2\n");
        }
        else if(point%3!=0)
        {
            printf("%d\n",point/3 + 1);
        }
        else
        {
            printf("%d\n",point/3);
        }
    }
    return 0;
}
