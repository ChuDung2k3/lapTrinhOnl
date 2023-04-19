#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int used[(int)1e6] = {0};
	for(int i = 0;i < n; ++i)
	{
		int x;
		scanf("%d", &x);
		if(x < 1 || x > n || used[x])
		{
			printf("NO\n");
			return 0;
		}
		used[x] = 1;
	}
	printf("YES\n");
	return 0;
}
