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
	int t;
	cin>>t;
	while(t--) {
		int n,s,k,temp;
		cin>>n>>s>>k;
		map<int,int>mp;
		rep(0,k,1) {
			cin>>temp;
			mp[temp] = 1;
		}
		int l=s,r=s;
		while(l > 0 or r <=n) {
			if(l > 0 and !mp[l]) {
				cout<<abs(l-s)<<endl;
				break;
			}
			else if(r <=n and !mp[r]) {
				cout<<abs(r-s)<<endl;
				break;
			}
			l--;
			r++;
		}
	}
}


 