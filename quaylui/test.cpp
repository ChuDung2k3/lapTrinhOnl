#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, x[100], cnt = 0;
bool used[100];

void check()
{
	for(int i = 1; i < n; ++i)
	{
		if((x[i] + x[i + 1]) % 4 == 0) return;
	}
				++cnt;
	for(int i = 1; i <= n; ++i)
		cout << x[i] << " ";
	cout << "\n";
}
void ql(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(!used[j])
		{
			x[i] = j;
			used[j] = true;
			if(i == n)
			{
				check();
			}
			else ql(i + 1);
			used[j] = false;
		}
	}
}
int main()
{
	cin >> n;
	ql(1);
	cout << cnt;
	return 0;
}
