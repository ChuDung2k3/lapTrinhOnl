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
    int n, m, k;
    cin >> n >> m >> k;
    if( k % __gcd(n, m))
    {
    	printf("Khong dong duoc nuoc");
    	return 0;
	}
	queue<pi> q;
	map<pi, int> mp;
	q.push({0, 0});
	mp[{0, 0}] = 0;
	while(q.size())
	{
		pi tmp = q.front();
		q.pop();
		int a = tmp.fi;
		int b = tmp.se;
		int c = a + b;
		if(k == a || k == b)
		{
			cout << mp[tmp];
			return 0;
		}
		vector< pair<int, int>> v
		{
			{a, 0}, {0, b}, {a, m},{n, b}, {max(0, c - m), min(c, m)}, {min(c, n), max(0, c - n)}
		};
		for(auto x : v)
		{
			if(mp.find(x) == mp.end())
			{
				mp[x] = mp[tmp] + 1;
				q.push(x);
			}
		}
	}
}

