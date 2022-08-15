#include<stdio.h>
int check_left_right(int arr[], int size)
{
    int count1=0,count2=0,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1<count2)
        return count1;
    else
        return count2;
}

int main()
{
    int test,i=0;
    int n,arr[100000];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("%d\n",check_left_right(arr, n));
    }
    return 0;
}
