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
    int n, ans = 0;
    cin >> n;
    priority_queue<pi, vector<pi>, greater<pi>> pq; // Cai nao co pi.fi nho nhat dc day len dau
    for(int i = 1; i <= n; ++i)
    {
    	int t, p; cin >> t >> p;
    	pq.push({p + ans, t});
    	while(pq.top().se < i) pq.pop();
    	ans = pq.top().fi;
	}
	cout << ans;
	return 0;
}

