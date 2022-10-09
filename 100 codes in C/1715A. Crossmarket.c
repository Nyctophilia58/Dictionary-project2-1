#include <stdio.h>

int t, n, m;
int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}


int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &m);
        printf("%d\n", n + m + min(n, m) - 2 - (n == 1 && m == 1));
    }
    return 0;
}
