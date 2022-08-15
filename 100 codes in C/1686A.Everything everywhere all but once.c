#include<stdio.h>
#include<string.h>
char check_equal(int arr[], int size)
{
    int i,j,c=0;
    float sum;
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=0;j<size;j++)
        {
            if(j!=i)
            {
                sum = sum+arr[j];
            }
        }
        sum = sum/(size-1);
        if(sum==arr[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int test,i,n,arr[50];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        check_equal(arr, n);
    }
    return 0;
}
