#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

bool cmp(pi a, pi b)
{
	if (a.se != b.se) return a.se < b.se;
	else return a.fi < b.fi;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<pi> a(n);
    for(int i = 0; i < n; ++i)
    {
    	cin>> a[i].fi >> a[i].se;
	}
	sort(begin(a), end(a), cmp);
	int cnt = 0, end = -1;
	for(auto x : a)
	{
		if(x.fi > end)
		{
			end = x.se;
			++cnt;
		}
	}
	cout << cnt;
	return 0;
}

