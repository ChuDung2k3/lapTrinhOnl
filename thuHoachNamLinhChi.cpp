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
    int n, k; cin >> n >> k;
    ll res = 1e18;
	vector<ll> am, duong;
    am.pb(0); duong.pb(0);
    for(int i = 0; i < n; ++i)
    {
    	ll x; cin >> x;
    	if(x >= 0) duong.pb(x);
    	else am.pb(-x);
	}
	sort(am.begin(), end(am));
	sort(begin(duong), end(duong));
	// Duyet so quang duong hai dc k nam
	// tu vi tri i --> k - i (k nam dc hai)
	for(int i = 0; i <= k; ++i)
	{
		if(i < duong.size() && k - i < am.size())
		{
			ll s = min(2 *duong[i] + am[k - i], duong[i] + 2 * am[k - i]);
			res = min(s, res);
		}	
	}
	cout << res;
}


