#include<stdio.h>
int main()
{
    int n,k,i,count=0,array[50];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    k=array[k-1];
    for(i=0;i<n;i++)
    {
        if(array[i]>=k && array[i]>0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

