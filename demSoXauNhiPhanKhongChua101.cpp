#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll a[n + 10] = {1, 2, 4, 7};
    for(int i = 4; i <= n; ++i)
    	a[i] = (a[i - 1] + a[i - 2] + a[i -4]) % mod;
    cout << a[n];
    return 0;
}

