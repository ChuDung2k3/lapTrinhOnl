#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

/* 
y tg: push cac dau '{', '[','(' vao 1 stack theo do uu tien
quy uoc: '(' co do uu tien = 0, '[' = 1, '{' = 2;
Neu phan tu nao dinh day vao stack co do uu tien > st.top() --> reutrn false;
Neu gap cac dau }, [, ):
	+ Neu stack rong : ko co cac dau mo ngoac --> return false;
	+ else: kiem tra st.top() co cung do uu tien voi dau dong ngoac tuong ung ko
*/

bool check(string s)
{
	map<char, int> uutien;
	uutien['('] = 0, uutien['['] = 1, uutien['{'] = 2;
	stack<char> st;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] =='(' || s[i] =='[' || s[i] == '{')
		{
			if(!st.empty() &&  uutien[s[i]] > uutien[st.top()])
			{
				return false;
			}
			st.push(s[i]);
		}
		else
		{
			if(st.empty())
			{
				return false;
			}
			if(s[i] ==')' && uutien[st.top()] == 0) st.pop();
			else if(s[i] ==']' && uutien[st.top()] == 1) st.pop();
			else if(s[i] =='}' && uutien[st.top()] == 2) st.pop();
			else
			{
				return false;
			 } 
		}
	}
	if(st.empty()) return true;
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
    	
    string s;
    cin>> s;
    if(check(s)) cout <<"Dung\n";
    else cout << "Sai\n";
	}
    return 0;
}

