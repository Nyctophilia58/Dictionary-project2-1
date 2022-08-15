#include <stdio.h>
char a[10];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",a);
        if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
