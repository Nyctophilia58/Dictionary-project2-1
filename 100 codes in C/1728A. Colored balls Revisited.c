#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t --) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i ++)
			scanf("%d", &a[i]);
		int max_i = 0;
		for (int i = 1; i < n; i ++) {N
			if (a[i] > a[max_i])
				max_i = i;
		}
		printf("%d\n", max_i + 1);
	}
	return 0;
}
