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
int sz[maxn], P[maxn], n, m;
vi adj[maxn];
struct Edge{
	int x, y, w;
};
vector<Edge> dscanh;
int find(int u)
{
	if(u == P[u]) return u;
	else return P[u] = find(P[u]);
}

bool Union(int u, int v)
{
	u = find(u); v = find(v);
	if(u == v) return false;
	if(sz[u] < sz[v]) swap(u, v);
	sz[u] += sz[v];
	P[v] = u;
	return true;
}
void nhap()
{
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		Edge a; cin >> a.x >> a.y >> a.w;
		dscanh.pb(a);
	}
	for(int i = 1; i <= n; ++i)
	{
		sz[i] = 1;
		P[i] = i;
	}
}
void kruskal()
{
	sort(begin(dscanh), end(dscanh), [](Edge a, Edge b) -> bool{
		return a.w < b.w;
	});
	int ans = 0;
	vector<Edge> tree;
	for(int i = 0; i < m; ++i)
	{
		if(tree.size() == n - 1) break;
		if(Union(dscanh[i].x, dscanh[i].y))
		{
			tree.pb(dscanh[i]);
			ans += dscanh[i].w;	
		}
	}
	cout << ans<<'\n';
}	
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    kruskal();
    return 0;
}

