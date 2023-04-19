#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, M;
int sM[9][9];
int chon[9];
int ketQua = 0;
void Try(int k)
{
	if(k > n)
	{
		int module = 0;
		for(int i = 1; i <= n; ++i)
			module += chon[i] * chon[i];
		module %= M;
		if(module > ketQua) ketQua = module;
	
		return;
	}
	for (int i = 1; i <= sM[k][0]; ++i)
	{
		chon[k] = sM[k][i];
		Try(k + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> M;
    for(int i = 1; i <= n; ++i)
    {
		cin >> sM[i][0];
    	for(int j = 1; j <= sM[i][0]; ++j)
    	{
    		cin >> sM[i][j];
		}
	}
	Try(1);
	cout <<ketQua <<"\n";
	return 0;
}

