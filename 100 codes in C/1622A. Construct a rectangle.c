#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t,i;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==b+c || b==a+c || c==a+b || (a==b&&!(c&1)) || (a==c&&!(b&1)) || (b==c&&!(a&1)))
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
