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
int prime[N];
void SieveOfEratosthenes(int n) 
{ 
     for (int p=2; p*p<=n; p++) {
        if (prime[p] == 0)  {
            for (int i=p*p; i<=n; i += p) 
                prime[i] = 1; 
        } 
    } 
} 
int dp[100002];
int main() 
{ 
	fastio;
	int n;
	cin>>n;
	int arr[n];
	rep(0,n,1) cin>>arr[i];
	int ans =0,c=1;
	rep(1,n,1) {
		if(arr[i] > arr[i-1]) {
			c++;
		}
		else {
			ans = max(ans,c);
			c = 1;
		}
	} ans = max(ans,c);
	cout<<ans;
}
