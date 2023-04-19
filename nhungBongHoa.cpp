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
    int a[n + 1] = {0};
    pair<int, int> m[n + 1];
    for(int i = 1; i <= n; ++i)
    {
    	cin >> a[i];
    	m[i].fi = a[i];
    	m[i].se = i;
	}
	sort(m + 1, m + n + 1);
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(a[m[i].se])
		{
			a[m[i].se - 1] = 0;
			a[m[i].se + 1] = 0;
			++cnt;
		}
	}
	cout << cnt << '\n';
	return 0;
}

