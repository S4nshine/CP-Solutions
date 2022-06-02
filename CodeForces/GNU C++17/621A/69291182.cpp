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
	int n,counte=0,minx=INT_MAX,temp;
	cin>>n;
	ll sum = 0,su=0;
	rep(0,n,1) {
		cin>>temp;
		if(temp % 2) {
			su+=temp;
			minx = min(temp,minx);
			counte++;
		}
		else sum+=temp;
	}
	if(counte&1) {
		cout<<(sum+su)-minx;
	} else cout<<sum+su;

}


 