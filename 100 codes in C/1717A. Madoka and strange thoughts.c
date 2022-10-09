#include<stdio.h>
int main(){
	int t,n;
	for(scanf("%d",&t);t;--t)
	{
	    scanf("%d",&n);
	    printf("%d\n",n+(n/2+n/3)*2);
	}
	return 0;
}
