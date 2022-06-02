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
		int a,b,c,d,k,x,y;
		cin>>a>>b>>c>>d>>k;
		if(a <= c) x= 1;
		else x = (a%c==0  ? a/c : (a/c) + 1);
		if(b <= d) y =1;
		else y = (b%d==0 ? b/d : (b/d) + 1);
		if((x+y)<=k) cout<<x<<" "<<y;
		else cout<<-1;
		cout<<endl; 
	}
}