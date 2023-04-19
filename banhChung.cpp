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
    int n, s = 0, a[6] = {0}; // ktao mang a : luu so doi co 1, 2, 3, 4 thanh vien
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
    	int tmp; cin >> tmp;
    	a[tmp]++;
	}
	s = a[4] + a[3] + a[2] / 2; // vi moi cai banh co the cho 4 ng an
	// so doi co 2 nguoi thi p chia 2 thi ra so banh. VD: a[2] = 5 --> s += (5/2)
	// So doi co 3 nguoi thi ta se gop voi doi mot nguoi
	// Con bao nhieu thi gop voi doi 2 nguoi con lai
	if(a[1] > a[3]) a[1] -= a[3];
	else a[1] = 0;
	s += a[1] / 4; a[1] %= 4;
	int remain = a[2] %2 * 2 + a[1];
	if(remain > 4) s += 2;
	else if(remain > 0) s++;
	cout << s;
	return 0;
}

