#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
// Copy code HP
ll p[100002]= {0};
void init()
{
	for(int i = 1; i <= 100000; ++i)
	{
		ll s = 0;
		for(int j = 1; j <= sqrt(i); ++j)
		{
			if(i % j == 0)
			{
					if(j % 2)
					{
						s += j;
						
					}
					if( (i/j) != j && (i / j) % 2)
					{
						s += (i / j);
					}
			}
		}
		p[i] = p[i - 1] + s;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    ll a, b;
    init();
    while(t--)
    {
    	cin >> a >> b;
    	cout << p[b] - p[a - 1] <<'\n';
	}
	return 0;
}

