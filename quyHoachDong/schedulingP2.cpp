#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

struct pro
{
    ll f, s, w;    
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>> n;
    pro a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i].f >> a[i].s >> a[i].w;
    }
    sort(a, a + n, [](pro a, pro b) -> bool{
        return a.s < b.s;
    });
    ll ans[n];
    ans[0] = a[0].w;
    for(int i = 1; i < n; ++i)
    {
//    	ans[i] = a[i].w;
        ans[i] = max(a[i].w, ans[i - 1]);
        for(int j = i - 1; j >= 0; --j) // duyeet tu lon den be duoc bao nhieu break luon
        {
        	if(a[j].s < a[i].f)
        	{
        		ans[i] = max(ans[i], a[i].w + ans[j]);
        		break;
			}
		}
    }
    cout << ans[n - 1];
    return 0;
}
