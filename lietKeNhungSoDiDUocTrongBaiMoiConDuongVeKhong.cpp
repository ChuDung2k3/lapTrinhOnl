#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void dfs(int u, set<int> &s)
{
	if(s.find(u) == s.end())
	{
		s.insert(u);
		for(int i = 1; i *i <= u; ++i)
		{
			if(u % i == 0) dfs(((i - 1) * (u / i + 1)),s);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int> s;
    dfs(n, s);
    for(int x : s)
    {
    	cout << x <<" ";
	}
	return 0;
}

