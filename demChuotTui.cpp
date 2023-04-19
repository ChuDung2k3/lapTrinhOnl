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
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    int k = (n + 1) / 2;
    int d = 0;
    while(k < n)
    {
    	if(a[k] >= a[d] * 2)
    	{
    		++d; ++k;
		}
		else ++k;
	}
    cout << n - d <<'\n';
    return 0;
}

