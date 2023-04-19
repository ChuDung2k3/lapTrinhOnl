#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int maxn = 10001;
struct Edge{
	int x, y, w;
};
int P[maxn];

vector<Edge> dscanh;
bool cmp(Edge a, Edge b)
{
	return a.w < b.w;
}
int find(int u)
{
	return P[u] == 0 ? u: find(P[u]);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, ans = 0; cin >> n >> m;
    Edge A[m];
    for(int i = 0; i < m; ++i) cin >> A[i].x >> A[i].y >> A[i].w;
    sort(A, A + m, cmp);
    for(auto it : A)
    {
    	int u = find(it.x), v = find(it.y);
    	if(u!= v)
    	{
    		P[u] = v;
    		P[it.x] = v;
    		if(it.y != v) P[it.y] = v;
    		ans += it.w;
		}
	}
	cout << ans;
	return 0;
}

