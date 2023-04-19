#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int d = 0;
void solve(int n, char A, char B, char C)//chuyen A --> B
{
	if(n == 0)return;
	solve(n - 1, A, C, B);// chuyen n - 1 dia tu A --> C
	cout << "Buoc" << ++d << " Chuyen dia " << n << " tu " << A << " sang " << B <<'\n';// chuyen dia thu n tu cot A --> B
	solve(n - 1,C, B, A) ;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    solve(n, 'A', 'B','C');
}

