#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    char name[100][11],status[100][11];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%s %s",name[i],status[i]);
    }
    for(i=0;i<n;i++){
        if(!strcmp(status[i],"rat"))
            printf("%s\n",name[i]);
    }
    for(i=0;i<n;i++){
        if(!strcmp(status[i],"woman")||!strcmp(status[i],"child"))
            printf("%s\n",name[i]);
    }
    for(i=0;i<n;i++){
        if(!strcmp(status[i],"man"))
            printf("%s\n",name[i]);
    }
    for(i=0;i<n;i++){
        if(!strcmp(status[i],"captain"))
            printf("%s",name[i]);
    }
    return 0;
}

