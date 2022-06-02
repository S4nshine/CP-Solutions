#include<bits/stdc++.h>
#include <deque>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define l long int
#define ll long long int
#define PI 3.14
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
//	fastio;
	//input;
	string a;
	cin>>a;
	int n = a.size();
	if(n  == 1) {
		cout<<a[0];
		return 0;
	}
	bool flag = n  % 2 ==1 ;
	int s = (n % 2== 0 ? n/2-1 : n/2);
	cout<<a[s];
	for(int i=1;i<n/2+flag;i++) {
		cout<<a[s+i]<<a[s-i];
	}
	if(!flag)cout<<a[n-1];
}
