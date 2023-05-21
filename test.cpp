#include <bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	ll  test,n,a[10007];
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=0;i<n;i++)		cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(binary_search(a,a + n,i))		cout<<i<<" ";
			else  						cout<<"-1"<<" ";
		}
		cout<<endl;
	}
}
