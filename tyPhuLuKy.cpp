#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int ox[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int oy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
int a[905][905];
bool used[905][905];
ll cnt = 0, res = 0;
void bfs(int i, int j)
{
	queue<pi> q;
	q.push({i, j});
	used[i][j] = 1;
	while(!q.empty())
	{
		pi tmp = q.front(); q.pop();
		int u = tmp.fi, v = tmp.se;
		for(int k = 0; k < 8; ++k)
		{
			int i1 = u + ox[k], j1 = v + oy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] > a[u][v]) 
			{
				cnt = 0;
			}
			if(!used[i1][j1])
			{
				if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == a[u][v])
				{
					used[i1][j1] = 1;
					q.push({i1, j1});
				}
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}		
	}
	for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
    	{
    		if(!used[i][j])
    		{
    			cnt = 1;
    			bfs(i, j);
    			res += cnt;
			}
		}
	}
	cout << res;
}

