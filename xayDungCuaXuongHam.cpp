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
    int n; cin>> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    int mid = n / 2;
    ll s = 0;
    for(int i = 0; i < n; ++i)
    {
    	s += abs(a[mid] - a[i]);
	}
	cout << s;
}

