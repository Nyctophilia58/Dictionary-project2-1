#include <stdio.h>

char s[107];

int main(){
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		scanf("%s", &s[1]);
		if (n > 2 || (n == 2 && s[1] == s[2])){
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	return 0;
}
