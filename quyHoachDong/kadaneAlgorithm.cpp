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
    for(int i = 0;i < n; ++i) cin >> a[i];
    ll sum1 = 0, sum2 = -1e18;
    for(int i = 0;i < n; ++i)
    {
    	sum1 += a[i];
    	sum2 = max(sum1, sum2);
    	if(sum1 < 0) sum1 = 0;
	}
	cout << sum2 << '\n';
	return 0;
}

