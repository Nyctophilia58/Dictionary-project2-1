#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
       printf("%d %d\n",(x+1)/2,(y+1)/2);
    }
    return 0;
}
