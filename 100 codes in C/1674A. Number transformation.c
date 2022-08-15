#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(y%x==0)
        {
            printf("%d %d\n",1,y/x);
        }
        else
        {
            printf("0 0\n");
        }
    }
    return 0;
}
