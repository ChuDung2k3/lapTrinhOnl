#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long
#define pb push_back
#define fi first
#define se second

int f[100005];

int main()
{
	int n;
	scanf("%d", &n);
	int a[n + 1];
	for(int i = 1;i <= n; ++i) scanf("%d", &a[i]);
	f[0] = 0; f[1] = 1;
	for(int i = 2; i <= n; ++i)
	{
		if(i == 2 && a[i] == 0) f[i] = 1;
		else if(i == 3 && a[i] == 0) f[i] = 1;
		else
		{
			if(a[i])
			{
				f[i] = 0;
			}
			else
			{
				if((f[i - 1] && f[i - 2] == 0 )|| (f[i - 1] == 0&& f[i - 2]))
				{
					if(f[ i - 1] > f[i - 2])
					{
						f[i] = f[i - 1] + 1;
					}
					else f[i] =f[i - 2] + 1;
	//				f[i] = max(f[i - 1] + 1, f[i - 2] + 1);
				}
				else if(f[i - 1] == 0 && f[i - 2] == 0) f[i]= 0;
				else 
				{
	//			f[i] = min(f[i - 1],f[i - 2]) + 1;
					if(f[i - 1] < f[i - 2] )
					{
						f[i] = f[i - 1] + 1;
					}
					else f[i] = f[i - 2] + 1;
				}
			}
		}
	}
//	for(int i = 1; i <= n; ++i)
//	{
//		printf("%d ",f[i]);
//	}
	if(f[n] ==0) printf("khong qua duoc suoi");
	else printf("%d", f[n]);
	return 0;
}


