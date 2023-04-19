#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int n, m, q;
int d[205][205];
void init()
{
	cin >> n >> m >> q;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			if(i == j) d[i][j] = 0;
			else d[i][j] = 1e9;
		}
	}
	for(int i = 0 ;i < m; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		d[x][y] = w;
	}
	for(int k = 1; k <= n; ++k)
	{
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= n; ++j)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    while(q--)
    {
    	int x, y;
    	cin >> x >> y;
    	if(d[x][y] == 1e9) cout <<"-1\n";
    	else
    		cout << d[x][y] <<'\n';
	}
    return 0;
}

