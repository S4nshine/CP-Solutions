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
int a,b,c,d,x,y,n,k,m,l,ans,res;
//33333333333;
void SieveOfEratosthenes(int n) 
{ 
	fill(arr,arr+n+1,1);
    for (int p=2; p*p<=n; p++) { 
        if (arr[p]) {
            for (int i=p*p; i<=n; i+=p) 
                arr[i] = 0;
        }
    }
} 
int main()  {
	// input;  	
	fastio;
	cin>>k>>l>>m>>n>>d;
	rep(1,d+1,1) {
		if(i%k==0 or i%l==0 or i%m == 0 or i%n == 0) ans++;
	}
	cout<<ans;
}
