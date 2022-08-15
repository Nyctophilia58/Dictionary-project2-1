#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);
	while (t--) {
		int n, ans;

		scanf("%d", &n);
		ans = 0;
		while (n--) {
			int a;
			scanf("%d", &a);
			ans |= a;
		}
		printf("%d\n", ans);
	}
	return 0;
}

