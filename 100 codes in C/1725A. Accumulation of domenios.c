#include <stdio.h>
int main()
{
	long long int n,m,ans;
	scanf("%lld %lld",&n,&m);
	ans = n*(m-1) + (m == 1) * (n - 1);
	printf("%lld\n",ans);
	return 0;
}
