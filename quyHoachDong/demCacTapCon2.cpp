#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, r;
    ll a[1001], dp[1001] = {};
	cin >> n >> m >> r;
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		ll tang[m] = {};
		int x = a[i] % m;
		for(int j = 0; j < m; ++j)
		{
			tang[j * x % m] += dp[j];
		}
		tang[x]++;
		for(int j = 0; j < m; ++j)
		{
			dp[j] = (dp[j] + tang[j]) % mod;
		}
	}
	cout << dp[r] <<'\n';
	return 0;
}

