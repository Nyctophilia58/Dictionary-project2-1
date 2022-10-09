#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,j;
    char s[11];
    scanf("%d",&t);
    while(t--)
    {
        int T=0, i=0, m=0, u=0, r=0;
        scanf("%d",&n);
        scanf("%s",s);
        for(j=0;j<n;j++)
        {
            if(s[j]=='T'){
                T++;
            }
            if(s[j]=='m'){
                m++;
            }
            if(s[j]=='i'){
                i++;
            }
            if(s[j]=='r'){
                r++;
            }
            if(s[j]=='u'){
                u++;
            }
        }
        if(n==5 && T==1 && i==1 && m==1 &&u ==1 && r==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
