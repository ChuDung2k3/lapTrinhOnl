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
    priority_queue<int, vector<int>, greater<int>> pq;
    string s; cin >> s;
    int cnt['z' + 1] = {0};
    for(int i = 0; i < s.size(); ++i) cnt[s[i]]++;
    for(int i = 0; i < s.size(); ++i)
    {
    	if(cnt[s[i]]) pq.push(cnt[s[i]]);
    	cnt[s[i]] = 0;
	}
	ll sum = 0;
	while(pq.size() > 1)
	{
		int tmp1 = pq.top(); pq.pop();
		int tmp2 = pq.top(); pq.pop();
		sum += tmp1 + tmp2;
		pq.push((tmp1+tmp2));
	}
	cout << sum;
}

