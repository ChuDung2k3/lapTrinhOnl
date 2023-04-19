#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

/* Day con tang dai nhat */
struct mayBay
{
	int s, e, w;	
};
bool cmp(mayBay a, mayBay b)
{
	return a.e < b.e;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    mayBay a[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i].s >> a[i].e >> a[i].w;
    	a[i].e += a[i].s;
	}
	sort(a, a + n, cmp);
	ll ans[n] = {0}, res = 0;
	for(int i = 0; i < n; ++i)
	{
		ans[i] = a[i].w;
		for(int j = 0; j < i; ++j)
		{
			if(a[j].e <= a[i].s)
			{
				ans[i] = max(ans[i], ans[j] + a[i].w);
			}
		}
		res = max(res, ans[i]);
	}
	cout << res;
	return 0;
}

