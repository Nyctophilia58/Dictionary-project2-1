#include<stdio.h>
int main(){
	int t,n,a[51];
	scanf("%d",&t);
	while(t--){
		int max=0,min=1000000005;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i];
		}
		printf("%d\n",max-min);
	}

	return 0;
}
