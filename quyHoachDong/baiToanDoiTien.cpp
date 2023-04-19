#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

//dp[i]: so to it nhat doi dc i tien
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q, M, dp[10001], a[101];
    cin >> n >> q;
    for(int i = 0;i < n; ++i) cin >> a[i];
    dp[0] = 0;
    sort(a, a+ n);
    for(int i =1; i <= 10000; ++i)
    {
    	dp[i] = 1e4 + 5;
    	for(int j = 0; j < n && a[j] <= i; ++j)
    	{
    		dp[i] = min(dp[i], dp[i - a[j]] + 1);
		}
	}
	while(q--)
	{
		cin >> M;
		if(dp[M] == 1e4 + 5) 
		{
		cout <<"-1\n"; 
		continue;
		}
		else cout << dp[M]<<'\n';
	}
}

