#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    int a[t][10000];
    int b[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        b[i]=n;
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0;i<t;i++)
    {
        int a1[b[i]];
        int n1,num=0,num1=0;
        for(int j=0;j<b[i];j++)
        {
            n1=a[i][j];
            a1[j]=n1;
        }
        for(int j=0;j<b[i];j++)
        {
            if(a1[j]!=0)
            {
                n1=a1[j];
                num1++;
                for(int k=j+1;k<b[i];k++)
                {
                    if(a1[k]==n1)
                    {
                        a1[j]=0;
                        num++;
                        break;
                    }
                }
            }
        }
        if((num==0)&(num1==b[i]))
        {
            num=b[i]+1;
            printf("%d\n",num);
        }
        else
        {
            for(int j=0;j<b[i];j++)
            {
                if(a1[j]!=0)
                    num++;
            }
            printf("%d\n",num);
        }
    }
    return 0;
}

