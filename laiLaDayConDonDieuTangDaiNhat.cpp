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
    int n; cin >> n;
    vector<ll> v;
    while(n--)
    {
    	ll t; cin >> t;
    	if(v.empty() || v.back() < t) v.pb(t);
    	*lower_bound(v.begin(), v.end(), t) = t;
    	
	}
	cout << v.size();
}

