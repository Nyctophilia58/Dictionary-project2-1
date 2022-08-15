#include<stdio.h>

int main()
{
    int t, x, a, b, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d%d",&x,&a,&b,&c);
        int arr[3];
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        if (arr[x-1]!=0 && arr[arr[x-1]-1]!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
