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
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x: b) cin >> x;
    sort(a, a + n); sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m)
    {
    	if(a[i] > b[j])
    	{
    		++cnt;
    		++i;++j;
		}
		else ++i;
	}
	cout << cnt<<'\n';
}

