#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
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

struct b {
	int d,g;
};
bool cmp(b x ,b y) {
	return x.d < y.d;
}
int main()
{
	// input;				
	fastio;
	int n,m;
	cin>>n>>m;
	int arr[n];
	b a[m];
	rep(0,n,1) cin>>arr[i];
	rep(0,m,1) cin>>a[i].d>>a[i].g;
	sort(a,a+m,cmp);
	rep(0,n,1) {
		long long int ans=0;
		for(int j=0;j<m;j++) {
			if(a[j].d > arr[i]) break;
			else ans+=a[j].g; 
		}
		cout<<ans<<" ";
	}
}
