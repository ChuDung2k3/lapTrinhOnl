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
Y tg: tao mot mang v luu lai so man con lai ngay thu i
Ta chia 2 truong hop:
+ v[i - 1] > 0; Ngay thu i - 1 van con man
+ v[i - 1] = 0: Khong con man ngay thu i

*/
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n , m; cin >> n >> m;
    ll cnt[n + 2] = {0};
    ll res = 0;
    for(int i = 1; i <= n; ++i)
    {
    	cin >> cnt[i];
	}
	for(int i = 1; i <= n + 1; ++i) // Xet den ngay thu n + 1;
	{
		if(cnt[i - 1] > 0)
		{
			ll plums = min(cnt[i - 1], m);
			res += plums;
			plums = min(cnt[i], m - plums);
			res += plums;
			cnt[i] -= plums;
		}
		else
		{
			ll plums = min(cnt[i], m);
			res += plums;
			cnt[i] -= plums;
		}
	}
	cout << res;
	return 0;
	
}

