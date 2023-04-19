#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void solv(ll n, ll m)
{
	ll ans = 0, cnt = 0;
	while(m > n)
	{
		if(m%2) m++;
		else m /= 2;
		++cnt;
	}
	cout << cnt + (n - m);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m; cin >> n >> m;
    solv(n, m);
}

