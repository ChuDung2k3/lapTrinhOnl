#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m;
string res ="";
bool check[205];
void Try(int m, string s)
{
	check[m]++;
	if(m < n || check[m] > 1 || res != "") return;
	else if(m == n) res = s;
	for(int i = sqrt(m); i >= 1; --i)
	{
		if(m%i == 0)
		{
			int t = (i - 1) * ( m / i + 1);
			Try(t, s + " " + to_string(t));
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    Try(m, to_string(m));
    if(res == "")
    {
    	cout << "Khong Sinh Ra Duoc";
    	
	}
	else cout << res;
	return 0;
}

