#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

//dp[i][j]: So cach bien doi i -> j;
//dp[i][j - 1]: insert
//dp[i -1][j] :delete
//dp[i - 1][j - 1] : replace
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    s = "@" + s; t = "@" + t;
    int dp[n + 1][m + 1] = {0};
    for(int i = 1; i <= n; ++i) dp[i][0] = i;
    for(int i = 1; i <= m; ++i) dp[0][i] = i;
    for(int i = 1; i <= n;++i)
    {
    	for(int j = 1; j <= m; ++j)
    	{
    		if(s[i] == t[j]) dp[i][j] = dp[i-1][j-1];
    		else
    		{
    			dp[i][j] = min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]}) + 1;
			}
		}
	}
	cout << dp[n][m] <<"\n";
	return 0;
}

