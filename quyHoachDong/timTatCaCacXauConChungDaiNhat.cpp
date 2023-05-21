#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int dp[105][105];


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string m, n; cin >> m >> n;
    int s = m.size(), t = n.size();
    for(int i = 1; i <= s; +i)
    {
    	for(int j = 1; j <= t; ++j)
    	{
    		if(m[i - 1] == n[j - 1])
    		{
    			dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[s][t] <<'\n';
	return 0;
}

