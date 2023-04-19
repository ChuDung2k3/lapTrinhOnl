#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n>> m;
    ll a[n + 1], dp[n + 1] = {0};
    for(int i = 1; i <= n; ++i)
    {
    	cin >> a[i];
    	dp[i] += dp[i - 1] +  a[i];
	}
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		cout << dp[r] - dp[l -1] <<'\n';
	}
	return 0;
}

