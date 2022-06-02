#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define rrep(a,n,b) for(long int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")<<endl
#define PI 3.1415926535
#define ll long long int
#define mod 10000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main()
{
	// input;		
	fastio;	
	int n;
	cin>>n;
	int arr[n];
	rep(0,n,1) cin>>arr[i];
	unordered_map<int,int>mp;
	stack<int>s;
	rrep(0,n-1,1) {
		if(mp[arr[i]]) continue;
		s.push(arr[i]);
		mp[arr[i]] =1;	
	} cout<<s.size()<<endl;
	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}
 }