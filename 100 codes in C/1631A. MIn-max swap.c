#include<stdio.h>
int main()
{
	int n, t, a[10010], b[10010];
	scanf("%d", &t);
	while(t--)
    {
		int maxa=0, maxb=0;
		scanf("%d",&n);
		for(int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for(int i = 0; i < n; ++i)
		{
			scanf("%d",&b[i]);
			if(b[i] > a[i])
			{
				int  c = a[i];
				a[i] = b[i];
				b[i] = c;
			}
		}
		for(int i=0;i<n;++i)
		{
			if (a[i] > maxa)
                maxa = a[i];
			if (b[i] > maxb)
                maxb = b[i];
		}
		printf("%d\n", maxa*maxb);
	}
	return 0;
}
