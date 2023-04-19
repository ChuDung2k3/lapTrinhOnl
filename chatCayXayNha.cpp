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
    ll n, L;
    cin >> n >> L;
    ll M = -1, a[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    	M = max(M, a[i]);
	}	
	ll low = 0, ans = 0;
	ll high = M - 1;
	while( low <= high)
	{
		ll middle = (low + high) / 2;
		ll sum = 0;
		for(int i = 0; i < n; ++i)
		{
			if(a[i] > middle) sum += a[i] - middle;
		}
		if(sum >= L)
		{
			ans = middle;
			low = middle + 1; 
		}
		else{
			high = middle - 1;
		}
	}
	cout << ans <<'\n';
}

