#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		int r=(m-n)>0?(m-n):(n-m);
		int max=(m>n)?m:n;
		if(n==1||m==1)
		{
			if(r<2)
			printf("%d\n",r);
			else
			printf("-1\n");
		}
		else
		{
			if(r%2==0)
			printf("%d\n",(2*max-2));
			else
			printf("%d\n",(2*max-3));
		}
	}
	return 0;
}
