#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

string bo, me;
char con[17];
int len;
map<string, int> mp;
bool check()
{
	int cnt = 0;
	for(int i = 0; i < len; ++i)
	{
		if(con[i] == 'T' ||con[i] == 'H' ||con[i] == 'L' ||con[i] == 'N')
		{
			++cnt;
			if(cnt == 3) return false;
		}
		else cnt = 0;
	}
	return true;
}
void Try(int k)
{
	if(k >= len)
	{
		// Luu ket qua
		if(check())
		{
			string tmp = "";
			for (int i = 0; i < len; i++)
				tmp += con[i];
			mp[tmp]++;
		}
		return;
	}
	con[k] = bo[k];
	Try(k + 1);
	con[k] = me[k];
	Try(k + 1);
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> bo >> me;
    len = bo.size();
    Try(0);
    for(auto x : mp)
    {
    	cout << x.fi << '\n';
	}
	return 0;
}

