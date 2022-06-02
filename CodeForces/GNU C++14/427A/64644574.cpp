#include<bits/stdc++.h>
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
int arr[N];
ll a,b,c,d,q,x,y,n,k,m,l,ans,res,temp;
//33333333333;
int main()  {
	// input;  	
	fastio;
	cin>>n,ans=0,c=0;
	int arr[n];
	rep(0,n,1) cin>>arr[i];
	rep(0,n,1) {
		if(arr[i] == -1)  {
			if(c) c--;
			else ans++;
		}
		else if(arr[i] >=1) c = c + arr[i];
	} cout<<ans;
}
