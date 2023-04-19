#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int gao[10], sum = 0;
int hoanVi[10];
bool check[10] = {};

int ketQua = INT_MAX;
void tinhChenhLech()
{
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for(int i = 1; i <= 3; i++)
		sum1 += gao[hoanVi[i]];
	for(int i = 4; i <= 6; i++)
		sum2 += gao[hoanVi[i]];
	sum3 = sum - sum1 -sum2;
	
	int Max, Min;
	Max = max(sum1, max(sum2, sum3));
	Min = min(sum1, min(sum2, sum3));
	
	if(Max - Min < ketQua)
		ketQua = Max - Min;
}
void Try(int k)
{
	if(k > 6)
	{
		tinhChenhLech();
		return;
	}
	for(int i = 1; i <= 9; ++i)
	{
		if(check[i] == false)
		{
			hoanVi[k] = i;
			check[i] = true;
			Try(k + 1);
			check[i] = false;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= 9; ++i)
    {
		cin >>gao[i];
		sum += gao[i];
	}
    Try(1);
    cout <<ketQua;
    return 0;
}

