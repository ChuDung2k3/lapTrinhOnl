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
    map<pi,int> mp;
    mp[{0,0}] = 0;
    if (mp.find({0, 0}) == mp.end())
    {
    	cout << "0\n";
	}
	else cout << "1\n";
}

