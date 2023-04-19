#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int n, a[100], M, res = 0;
void Try(int k, int T)
{
	if(k == n) res = max(res, T);
	else
	{
		if(a[k + 1] + T <= M) Try(k + 1, T + a[k + 1]);
		Try(k + 1, T);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> M;
    for(int i = 1; i <= n; ++i) cin >>a[i];
    Try(0, 0);
    cout <<res;
}

