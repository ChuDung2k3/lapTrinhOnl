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
    int a[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i];
	}
	ll res = *max_element(a, a + n);
	ll sum = 0, cnt = 0, ans = 0;
	for(int i = 0; i < n; ++i)
	{
		if(a[i] != res)
		{
			sum += a[i];
			++cnt;
		}
		if(a[i] == res)
		{
			if(sum != 0)
			{
				ans += res * cnt - sum; 
			}
			cnt = 0;
			res = *max_element(a + i + 1, a + n);
			sum = 0;
		}
	}
	cout << ans <<'\n';
	return 0;
}

