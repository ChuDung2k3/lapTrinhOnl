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
    int n; cin >> n;
    if(n == 1)
    {
    	cout << 1;
    	return 0;
	}
    
    if(n == 2)
    {
    	cout << 2;
    	return 0;
	}
    
	int t0 = 1;
    int t1 = 1;
    int t2 = 2;
    int tmp = 0;
    
    for(int i = 3; i <= n; ++i)
    {
    	tmp = t2 + t1 +t0;
    	t0 = t1;
    	t1 = t2;
    	t2 = tmp;
	}
	cout << tmp;
    return 0;
}
