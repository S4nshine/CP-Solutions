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
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333;
int main()  {
//	input;  
	fastio;
	int t;
	cin>>t;
	while(t--) {
	 	unsigned long long  int n,x=0,m,temp,ans=0,a=0,b=0;
		cin>>n;
		rep(0,n,1)  {
			cin>>temp;
			if(temp%2) b = b + 1;
			else a = a + 1;
		}
		cin>>m;
		rep(0,m,1) {
			cin>>temp;
			if(temp%2) 
				ans+=b;
			else 
				ans+=a;
		} cout<<ans<<endl;
	}
}	