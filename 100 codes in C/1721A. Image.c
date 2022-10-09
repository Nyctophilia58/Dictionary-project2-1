#include<stdio.h>
int main ()
{  int n;
   scanf ("%d\n",&n);
   for(int i=0;i<n;i++)
   {
        int diff=0;
        char a,b,c,d;
        scanf("%c%c\n",&a,&b);
        scanf("%c%c\n",&c,&d);
        if(b!=a)
            diff++;
        if(c!=b && c!=a)
            diff++;
        if(d!=a && d!=b && d!=c)
            diff++;
        printf("%d\n",diff);
   }
   return 0;
}
