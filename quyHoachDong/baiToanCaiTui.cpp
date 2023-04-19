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
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int dp[n + 1][m + 1]= {0};
    for(int i = 0; i <= n; ++i)
    {
    	for(int j = 0; j <= m; ++j)
    	{
    		if(i == 0 || j == 0) dp[i][j] = 0;
    		else
    		{
    			dp[i][j] = dp[i - 1][j];
    			if(a[i] <= j)
    				dp[i][j] = max(dp[i][j], a[i] + dp[i - 1][j - a[i]]);
			}
		}
	}
	cout << dp[n][m];
	return 0;
}

