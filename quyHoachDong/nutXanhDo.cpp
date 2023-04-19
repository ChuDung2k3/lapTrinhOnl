#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

ll n, m, res;
ll dp[20001], used[20001];
int bfs()
{
	queue<ll> q;
	q.push(n);
	dp[n] = 0;
	used[n] = 1;
	while(!q.empty())
	{
		ll x = q.front();
		q.pop();
		if(x == m)
		{
			return dp[x];
		}
		if(x < m && !used[2 * x])
		{
			used[2 * x] = 1;
			dp[2 *x] = dp[x] + 1;
			q.push(2 * x);
		}
		if(x > 0 && !used[x - 1])
		{
			used[x - 1] = 1;
			dp[x - 1] = dp[x] + 1;
			q.push(x - 1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    cout << bfs();
    return 0;
}

