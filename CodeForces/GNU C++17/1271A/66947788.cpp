#include<bits/stdc++.h>
#
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
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
	// input;
	fastio;
		unsigned long long int a,b,c,d,e,f;
		cin>>a>>b>>c>>d;
		cin>>e>>f;
		unsigned long long int p = min(b,c);
		unsigned long long int s = min(d,p); // min bcd
		unsigned long long int x = min(a,d);
		unsigned long long int z = min(d-x,p);
		unsigned long long int v = min(a,d-s);
		cout<<max((s*f)+(e*v),(x*e)+(f*z));
} 
// 4 5 6 3 1 2