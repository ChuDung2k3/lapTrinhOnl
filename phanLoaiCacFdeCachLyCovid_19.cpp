#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
/*
Y tg:
	Thuat toan BFS
	Dung mang d do sau x thuoc mang F ban dau bai toan - 1
*/

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d[10005], F[10005] = {};
	vector<int> A[10004];
	queue<int> Q;
	cin >> n >> m;
	fill(d, d + n + 1, -1);
	for(int i = 1; i <= m; ++i)
	{
		int u, v;
		cin >> u >> v;
		A[u].pb(v);
		A[v].pb(u);
	}
	cin >> F[0];
	for(int i = 1; i <= F[0]; ++i)
	{
		int x;cin >> x;Q.push(x);
		d[x] = 0;
	}
	while(Q.size())
	{
		int u = Q.front(); Q.pop();
		for(int v : A[u])
		{
			if(d[v] == -1)
			{
				d[v] = d[u] + 1;
				F[d[v]]++;
				Q.push(v);
			}
		}
	}
	for(int i = 0; F[i] != 0; ++i)
	{
		cout << "F" << i <<": " <<F[i] <<'\n';
	}
}

