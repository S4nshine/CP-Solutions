#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
	int n,x=INT_MAX,y=INT_MIN;
	cin>>n;
	vector<pair<int,int>>arr;
	rep(0,n,1) {
		int a,b;
		cin>>a>>b;
		arr.push_back({a,b});
		x = min(x,a);  y = max(y,b);
	} 
	rep(0,n,1) {
		if(arr[i].first == x and arr[i].second == y) { cout<<i+1; return 0;}
	} cout<<-1;
}     