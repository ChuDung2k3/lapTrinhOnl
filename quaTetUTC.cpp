#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = 1e9 + 7;

int dp[100001];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if(s[0] == '0')
    {
    	cout << 0;
    	return 0;
	}
	dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= s.length(); ++i)
    {
    	if(s[i - 1] > '0')
    	{
    		dp[i] = dp[i - 1];
    		dp[i] %= MOD;
		}
		if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7'))
		{
			dp[i] += dp[i - 2];
			dp[i] %= MOD;
		}
	}
	cout << dp[s.length()];
	return 0;
}

