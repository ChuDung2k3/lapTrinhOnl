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
    
    int n, m; cin >> n >> m;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[m + 1] = {0};
    dp[0] = 1;
    for(int i = 0; i < n;++i)
    {
    	for(int j = m; j >= a[i]; --j)
    	{
    		dp[j] += dp[j - a[i]];
    		dp[j] %= mod;
		}
	}
	if(m!= 0)
		cout << dp[m] <<'\n';
	else cout << m<<'\n';
	
	return 0;
}

