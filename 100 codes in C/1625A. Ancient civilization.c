#include<stdio.h>

int main() {
    int t, n, m, a[100];
	scanf("%d", &t);
	while (t--) {
		int b[30] = {}, e = 0;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			for (int j = 0; j < m; j++)
				b[j] += (a[i] & 1 << j) > 0;
		}
		for (int i = m; i--;) {
			e *= 2;
			if (b[i] > n - b[i])
				e++;
		}
		printf("%d\n", e);
	}
	return 0;
}
