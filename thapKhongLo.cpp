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
    int t; cin >> t;
    while(t--)
    {
	    int n, m; cin >> n >> m;
	    if(n < m) cout <<"-1\n";
	    else
	    {
	    	int mx = n / 2 + n %2;
	    	if(mx %m) cout <<  (mx/m + 1) * m<<'\n';
	    	else cout << mx <<'\n';
		}
    	
	}
}

