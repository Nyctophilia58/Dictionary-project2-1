#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c,d,e,f;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
        if(b==d && b>f)
            printf("%d\n",abs(a-c));
        else if(b==f && b>d)
            printf("%d\n",abs(a-e));
        else if(d==f && d>b)
            printf("%d\n",abs(c-e));
        else
            printf("0\n");
    }
    return 0;
}
