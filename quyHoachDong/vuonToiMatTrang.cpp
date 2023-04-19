#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int MOD = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a[2];
    cin >> n;
    for(int &x : a) cin >> x;
    ll dp[n + 1] = {0};
    dp[0] = 1;
    for(int i = 1; i <= n; ++i)
    {
    	for(int c : a)
    	{
    		if(i >= c)
    		{
    			dp[i] += dp[i - c];
    			dp[i] %=MOD;
			}
		}
	}
	if(n == 0)cout << n;
	else
		cout << dp[n];
	return 0;
}

