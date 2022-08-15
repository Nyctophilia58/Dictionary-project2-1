#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--) {
        char string[100];
        scanf("%s",&string);
        if (string[0] == 'Y' || string[0] == 'y') {
            if(string[1] == 'E' || string[1] == 'e') {
                if(string[2] == 'S' || string[2] == 's') {
                    printf("YES\n");
                }
                else {
                    printf("NO\n");
                }
            }
            else {
                printf("NO\n");
            }
        }
        else
            printf("NO\n");
    }
    return 0;
}


