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
    ll n, m, k; cin >> n >> k >> m;
    queue<ll> q;
    ll res = 0;
    for(int i = 1; i <n + k; ++i)
    {
    	int x;
    	if(i <= n) cin >> x;
    	else x = 0;
    	q.push(x);
    	while(q.size() > k) q.pop();
    	ll ans = 0;
    	while(!q.empty() && ans + q.front() <= m)
    	{
    		ans += q.front();
    		q.pop();
		}
		if(q.size())
		{
			q.front() -= (m - ans);
			ans = m;
		}
		res += ans;
	}
	cout <<res <<'\n';
	return 0;
}

