#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int a[9][9], ok = 0;
bool check(int u, int v, int t)
{
	for(int k = 0; k < 9; ++k)
	{
		if(a[u][k] == t || a[k][v] == t) return 0;
	}
	for(int i = u / 3 * 3; i < u / 3 * 3 + 3; ++i)
	{
		for(int j = v / 3 * 3; j < v / 3 * 3 + 3; ++j)
		{
			if(a[i][j] == t) return 0;
		}
	}
	return 1;
}
void in()
{
	for(int i = 0; i < 9; ++i)
	{
		for(int j = 0; j < 9; ++j)
		{
			cout << a[i][j]<<" ";
		}
		cout <<"\n";
	}
}
void Try(int u, int v)
{
	if(ok) return;
	if(u > 8)
	{
		in();
		ok = 1;
		return;
	}
	if(a[u][v]) Try(u + v/8, (v + 1) %9);
	else
	{
		for(int t = 1; t <= 9; ++t)
		{
			if(check(u, v, t))
			{
				a[u][v] = t;
				Try(u + v/8, (v + 1) % 9);
				a[u][v] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < 9; ++i)
    {
    	for(int j = 0; j < 9; ++j)
    	{
    		cin >> a[i][j];
		}
	}
	Try(0, 0);
	return 0;
}

