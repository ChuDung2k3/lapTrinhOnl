#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

bool cmp(pair<int, int>x, pair<int, int>y)
{
	if(x.se != y.se) return x.se <y.se;
	else return x.fi < y.fi;
}
void solv()
{
	int n; cin >> n;
	vii a;
	for(int i = 0; i < n; ++i)
	{
		int x, y; cin >> x >> y;
		a.pb({x, y});
	}
	sort(begin(a), end(a), cmp);
//	for(auto x : a)
//	{
//		cout << x.fi <<" " << x.se<<'\n';
//	}
	int cnt = 0, end1 = -1e9, end2 = -1e9;
	for(int i = 0; i < n; ++i)
	{
		if(end1 < end2) swap(end1, end2); // chon cai end1 la cai lon
		if(a[i].fi > end1)
		{
			++cnt;
			end1 = a[i].se;
		}
		else if(a[i].fi > end2)
		{
			++cnt;
			end2 = a[i].se;
		}
	}
	cout << cnt<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--)
    {
    	solv();
	}
	return 0;
}

