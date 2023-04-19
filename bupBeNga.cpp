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
    int n, k; cin >> n >> k;
    ll sum = 0;
    int a[n];
    for(int i = 0; i < n; ++i) 
	{
		cin >> a[i];
		sum += a[i];
	}
    sort(a, a + n, greater<int>());
    int p = 0, soLuong = n;
    for(int i = 0; i < n; ++i)
    {
    	if(a[p] - a[i] >= k)
    	{
    		sum -= a[i];
    		++p;
    		soLuong -= 1;
		}
	}
	cout << soLuong << " " << sum;
	return 0;
}

