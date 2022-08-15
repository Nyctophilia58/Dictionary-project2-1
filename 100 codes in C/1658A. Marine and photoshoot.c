#include <stdio.h>
char S[102];
int main()
{
	int a;
	int T;
	int n;
	int s;
	int R;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		scanf("%s", S);
		s = 0;
		R = 0;
		for (a = 0; S[a] == '1'; a++);
		s = a;
		for (a++; a < n; a++)
		{
			if (S[a] == '0')
			{
				if (a - s < 3)
				{
					R += 3 - a + s;
				}
				s = a;
			}
		}
		printf("%d\n", R);
	}
	return 0;
}

