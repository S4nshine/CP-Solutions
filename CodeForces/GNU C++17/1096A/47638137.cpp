#include<bits/stdc++.h>
#include <deque>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define l long int
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
//	fastio;
//	input;
	int q;
	cin>>q;
	while(q--) {
		 int x,y;
		cin>>x>>y;
		int z = x*ceil(y/x);
		if(y % x ==0 )cout<<x<<" "<<y<<"\n";
		else if(z != x) cout<<x<<" "<<z<<"\n";
	// /	else cout<<x<<" "<<x*ceil(y/x)<<"\n";;
	}
}