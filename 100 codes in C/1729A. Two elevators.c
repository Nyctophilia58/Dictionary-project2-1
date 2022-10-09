#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		 int a,b,c,sub;
	scanf("%d %d %d",&a,&b,&c);
	if(b>c) sub=(b-c) +c;
	else sub=(c-b)+c;
	if(a<sub) printf("1\n");
	else if(a>sub) printf("2\n");
	else printf("3\n");
	}
	return 0;
}
