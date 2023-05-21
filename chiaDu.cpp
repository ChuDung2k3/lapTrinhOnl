#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
ll bipow(ll a, ll b, ll k)
{
	ll res = 1;
	while(b)
	{
		if(b % 2 == 1)
		{
			res *= a;
			res %= k;
		}
		a *= a;
		a %= k;
		b /= 2;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
    	
    ll m, n, k; cin >> m >> n >> k;
    cout << bipow(m, n, k)<<'\n';
	}
    return 0;
}

