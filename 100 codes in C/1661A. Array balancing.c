#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		long long a[n],b[n];
		long long i;
		long long dem=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>b[i])
			{
				int c;
				c=a[i];
				a[i]=b[i];
				b[i]=c;
			}
		}
		for(i=0;i<n-1;i++)
		{
			dem+=abs(a[i]-a[i+1]);
			dem+=abs(b[i]-b[i+1]);
		}
		printf("%lld\n",dem);
	}
	return 0;
}
