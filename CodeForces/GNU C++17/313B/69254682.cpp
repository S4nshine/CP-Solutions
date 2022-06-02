#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define ot(x) cout<<x
#define nl cout<<endl;
#define sc cout<<" "
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
const int N = 2e5+7;
const int MOD  = 1000000007;
const float PI = 3.1415926535;
//33333333333;
int main() 
{ 
	fastio;
	string a;
	cin>>a;
	int n = a.size(),c=0;
	int dp[n];
	rep(0,n,1) dp[i] = 0;
	rep(1,n,1) {
		if(a[i] == a[i-1]) c++;
		dp[i] = c;
	}
	//rep(0,n,1) cout<<dp[i]<<" ";
	cout<<endl;
	int q;
	cin>>q;
	while(q--) {
		int l,r;
		cin>>l>>r;
		cout<<max(0,dp[r-1]-dp[l-1])<<endl;
	}

}


 