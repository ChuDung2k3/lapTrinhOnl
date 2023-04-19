#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

/*
7
2 5 8  --- >kq: 2
*/
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a[5];
    cin >> n >> a[0] >> a[1] >> a[2];
    int dp[n + 1] = {0};
    
    fill(dp, dp + n + 1, -1);
    dp[0] = 0;
    for(int i = 0; i < 3; ++i)
    {
    	for(int j = a[i]; j <= n; ++j)
    	{
    		if(dp[j - a[i]] != -1)
    		{
    			dp[j] = max(dp[j - a[i]] + 1, dp[j]);
			}
		}
	}
	cout << dp[n];
	return 0;
}

