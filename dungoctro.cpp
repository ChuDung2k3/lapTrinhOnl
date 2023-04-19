#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class DT
{
	private:
		int n;
		float *a;
	public:
		friend istream& operator >>(istream& is, DT&);
		friend ostream& operator << (ostream& os, DT);
};

istream& operator >>(istream &is, DT &d)
{
	cout <<"Bac cua da thuc: ";
	cin >> d.n;
	d.a = new float[d.n+ 1];
	for(int i = 0; i <= d.n; ++i)
	{
		is >> d.a[i];
	}
	return is;
}
ostream& operator <<(ostream &os, DT d)
{
	for(int i = 0; i <= d.n;++i)
	{
		os << d.a[i] << " ";
		
	}
	return os;
}
int main(){
	DT d1;
	cout << '\n' <<"Nhap da thuc:\n";
	cin >> d1;
	cout <<"Da thuc vua nhap\n";
	cout << d1;
}
