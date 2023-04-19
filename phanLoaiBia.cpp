#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
void solv()
{
	int n; cin >> n;
    pair<float, float> beer[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> beer[i].fi >> beer[i].se;
	}
	int dp[n];
	for(int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < i; ++j)
		{
			if(beer[i].fi > beer[j].fi && beer[i].se < beer[j].se)
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	cout << *max_element(dp, dp + n) <<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
    	solv();
	}
    
	return 0;
}

