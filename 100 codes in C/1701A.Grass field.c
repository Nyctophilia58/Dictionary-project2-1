#include<stdio.h>
int main()
{
    int test, i, j, matrix[2][2];
    scanf("%d",&test);
    while(test--) {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        if (matrix[0][0] == 0 && matrix[0][1] == 0 && matrix[1][0] == 0 && matrix[1][1] == 0) {
            printf("0\n");
        } else if (matrix[0][0] == 1 && matrix[0][1] == 1 && matrix[1][0] == 1 && matrix[1][1] == 1) {
            printf("2\n");
        } else {
            printf("1\n");
        }
    }
    return 0;
}
