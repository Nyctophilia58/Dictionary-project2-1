#include<stdio.h>
main()
{
	int test,t;
	scanf("%d",&test);
	for(t=0;t<test;t++)
	{
		int i,j,k,cou=0,sign1=1,sign2=1;
		int n,m,b1,b2,x,y;
		scanf("%d %d %d %d %d %d",&n,&m,&b1,&b2,&x,&y);
		while(b1!=x&&b2!=y)
		{
			if(b1==n)
			{ sign1*=-1;}
			 if(b2==m)
			 sign2*=-1;
			b1+=1*sign1;
			b2+=1*sign2;
			cou++;
		}
		printf("%d\n",cou);
	}
	return 0;
}
