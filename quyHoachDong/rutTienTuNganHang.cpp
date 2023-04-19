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
    int M, n; cin >> M >> n;
	ll dp[M + 1] = {0};
	memset(dp, 0, sizeof(dp));
    int a[n];
    dp[0] = 1;
    for(int &x : a) cin >> x;
    for(int x : a)
    {
    	for(int i = 1; i <= M; ++i)
    	{
    		if(i >= x)
    		{
    			dp[i] += dp[i - x];
			}
		}
	}
//	for(int x : dp) cout << x << " ";
	cout << dp[M] << '\n';
	return 0;
}

