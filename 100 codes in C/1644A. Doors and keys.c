#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char s[10];
		gets(s);
		int i,j,flag=0;
		for(i=0;i<6;i++){
			if(s[i]>='A'&&s[i]<='Z'){
				for(j=0;j<i;j++){
					if(s[j]==(s[i]-'A'+'a')) flag++;
				}
			}
		}
		if(flag==3) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
