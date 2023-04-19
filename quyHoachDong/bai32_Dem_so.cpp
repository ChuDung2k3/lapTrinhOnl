#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = 1e9 + 7;

ll digitNumber(ll n , vector<ll>v)
{
    if (n < 1) return n == 0 ? 1 : 0;
    ll res = 0;
    string s = to_string(n);
    int m = s.length();
    for(int i = 0 ; i < m ;i++)
    {
        res += v[i];
    }
    res += ((s[0] - '0') - 1)* v[m - 1];// cac so co m - 1 chu so nhan them phan tu tinh tu 1 -->s[0] - 1;
    /*
    v[i]: cac so co i chu so ma cac chu so lien ke khac nhau--> d[0]= 1, d[1] = 9 (1 -> 9);
     vi du so 35: thi ta tinh res moi dau = v[0] + v[1] = 10 (0 -> 9);
	 35 se chia thanh (0 - 9) + (10- 29) + ( 30 - 35);
	 + (10 - 29) co 18 so <=> v[1] * 2 : so cac so co 1 chu so(9) * 2 (co 2 so cach chon so thu 2(1, 2)) 
	 
	 --> res = 10 + 18 = 28 (0 - 29);
    */
    
    //30- 35 ( Cac so le )
    //(31 - 35)
    for(int i = 1 ; i < m ; i++) // xet tu chu so thu 2;
    {
        int ans = s[i] - '0'; // chu so thu 2 = 5;
        int tmp = m - i - 1;// so chu so dang sau
		// Neu so sau lon hon so truoc--> co mot so trong doan xet bi lap--> (-1) gan bao bien best de ghep tiep;
        int du = s[i] > s[i - 1] ? ans - 1 : ans;
        
		res += ans == 0 ? 0 : du * v[tmp]; // du * v[tmp] : cac so don le duoc ghep cac so co m - i - 1 chu so o vi tri sau
        // Neu ans = 0 --> khong co cac so le o vi tri i
        if(s[i] == s[i - 1]) return res;// s[i] == s[i -1] so le nay bi lap b
        /*
        Tai sao return luon?
        vD: 30 - 33: co 4 so;
        s[i] == s[i- 1] --> best = ans = 3 ( s[i] > s[i - 1] thi ans -= 1;);
        Vua xinh!!
        */
    }
    return res + 1; // Cong them so co chu so 0 ( VD: 30)
}
void init()
{
    ll a , b ; cin >> a >> b;
    vector<ll>v(19);
    v[0] = 1;
    for(int i = 1 ; i <= 18 ; i++)
    {
        v[i] = v[i - 1] * 9;
    }
    cout << digitNumber(b , v) - digitNumber(a - 1 , v)<<'\n';
}
int main()
{
    init();
}
