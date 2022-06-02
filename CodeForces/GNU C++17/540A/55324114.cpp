#include<bits/stdc++.h>
#include<math.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define rrep(a,n,b) for(long int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "Yes" : "No")<<endl
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
	int n,ans=0;
	cin>>n;
	string a;
	string b;
	cin>>a;
	cin>>b;
	rep(0,n,1) {
		int x = a[i]-'0',y=b[i]-'0';
		ans = ans + min(abs(x-y),min(x,y)+(10-max(x,y)));
	} cout<<ans;
 }