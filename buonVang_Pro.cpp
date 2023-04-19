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
    int a[n];
    for(int &x : a) cin >> x;
    int max = a[n - 1], sum = 0;
    for(int i = n - 1; i >= 0; --i)
    {
    	if(a[i] > max) max = a[i];
    	else sum += max - a[i];
	}
	cout << sum;
	return 0;
}

