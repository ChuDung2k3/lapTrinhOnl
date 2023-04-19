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
    
    int n;
    cin >> n;
    int a[3];
    for(int &x : a) cin >> x;
    int dp[n + 1] = {0};
//    dp[0] = 1;
    for(int i = 1; i <= n; ++i)
    {
    	for(int x : a)
    	{
    		if(i >= x)
    		{
    			dp[i] = max(dp[i], dp[i - x] + 1);
			}
		}
	}
	cout << dp[5] <<'\n';
	return 0;
}

