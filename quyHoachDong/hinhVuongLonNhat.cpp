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
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
    		cin >> a[i][j];
	}
	int dp[n + 1][m + 1] ={0};
	int dp2[n + 1][m + 1] = {0};
	int mx = 0;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			if(i == 1 || j == 1) 
			{
				dp[i][j] = a[i][j];
				if(a[i][j]) dp2[i][j] = 0;
				else dp2[i][j] = 1;
			}
			else
			{
				if(a[i][j])
				{
					dp[i][j] = min({dp[i - 1][j], dp[i][j -1], dp[i - 1][j - 1]}) + 1;
				}
				else
				{
					dp2[i][j] = min({dp2[i - 1][j], dp2[i][j -1], dp2[i - 1][j - 1]}) + 1;
				}
			}
			mx = max({dp[i][j], mx, dp2[i][j]});
		}
	}
	cout << mx << '\n';
	return 0;
}

