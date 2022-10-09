#include<stdio.h>
int main()
{
    int n,a,b,m[2000],i,t,j;
    scanf("%d%d%d",&n,&a,&b);
    for(i=0; i<n; i++)
        scanf("%d",&m[i]);
    for(i=1; i<n; i++)
        for(j=0; j<n-1; j++)
            if(m[j]<m[j+1])
                t=m[j],m[j]=m[j+1],m[j+1]=t;
    printf("%d\n",m[a-1]-m[a]);
    return 0;
}
