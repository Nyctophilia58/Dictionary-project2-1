#include <stdio.h>

int t, n, A[310];

void solve() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
    int min = A[2] - A[0];
    for (int i = 2; i < n - 1; i++) if (A[i + 1] - A[i - 1] < min) min = A[i + 1] - A[i - 1];
    printf("%d\n", min);
}

int main() {
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}
