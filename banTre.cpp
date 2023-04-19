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
	    ll n, k, cnt = 0; cin >> n >> k;
	    while(n--)
	    {
	    	ll x; cin >> x;
	    	cnt += x / k;
		}
		cout << cnt * k * 3;
		return 0;
	}

