#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define PI 3.1415926535
#define ll long long int
#define mod 1000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333
int main()  {
	//input;
	fastio;
	int n,ans=0;
	cin>>n;
	string a;
	cin>>a;
	rep(0,n-1,2) {
		if(a[i] == 'a' and a[i+1] == 'a') {
			ans++;
			a[i+1] = 'b';
		}
		else if(a[i] == 'b' and a[i+1] == 'b')  {
			ans++;
			a[i+1] = 'a';
		}
	} cout<<ans<<endl<<a;
}