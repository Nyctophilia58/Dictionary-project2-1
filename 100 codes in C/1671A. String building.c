#include<stdio.h>
#include<string.h>

int main()
{
    int i,k=1,t;
    scanf("%d",&t);
    for(t=t;t>0;t--)
    {
        char s[50];
        k=1;
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='a' && s[i+1]=='a' && s[i+2]=='a' && s[i+3]!='a')
            {
                i=i+2;
            }
            else if(s[i]=='a' && s[i+1]=='a')
            {
                i++;
            }
            else if(s[i]=='b' && s[i+1]=='b' && s[i+2]=='b' && s[i+3]!='b')
            {
                i=i+2;
            }
            else if(s[i]=='b' && s[i+1]=='b')
            {
                i++;
            }
            else
            {
                k=0;
            }
        }
        if(k==0)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}
