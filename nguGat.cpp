#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int maxn = 100005;
int dLy[100005], hVi[100005], sumDly[maxn], sumHvi[maxn];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >>dLy[i];
    for(int i = 1; i <= n; ++i) cin >> hVi[i];
    for(int i = 1; i <= n; ++i)
    {
    	sumDly[i] = sumDly[i - 1] + dLy[i];
    	if(hVi[i]) sumHvi[i] = sumHvi[i - 1] + dLy[i];
    	else sumHvi[i] = sumHvi[i - 1];
	}
	int maxAdd = 0;
	for(int i = 1; i <= n - k + 1; ++i)
	{
		int sum1 = sumDly[i + k - 1] - sumDly[i - 1];
		int sum2 = sumHvi[i + k - 1] - sumHvi[i - 1];
		maxAdd = max(maxAdd, sum1 - sum2);
	}
	cout << sumHvi[n] + maxAdd;
	return 0;
}

