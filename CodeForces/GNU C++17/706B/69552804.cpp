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
	int n,q,temp;
	cin>>n;
	int arr[n];
	map<int,int>queries;
	rep(0,n,1) cin>>arr[i];
	sort(arr,arr+n);
	int c =1;
	for(int i=0;i<n;i++) {
		dp[arr[i]] = c;
		c++;
	}
	cin>>q;
	while(q--) {
		cin>>temp;
		temp = min(temp,100000);
		int ans = temp;
		if(queries[ans]) cout<<dp[ans]<<endl;
		else  {
			while(dp[temp] == 0 and temp > 0) temp--;
			cout<<dp[temp]<<endl;
			queries[ans] =  1;
			dp[ans] = dp[temp];
		}
	}
}
