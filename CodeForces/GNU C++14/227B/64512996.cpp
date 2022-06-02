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
	cin>>n;
	rep(0,n,1) {
		cin>>temp;
		arr[temp] = i;
	}
	cin>>q;
	map<int,int>mp;
	while(q--) {
		cin>>temp;
		a+=arr[temp]+1;
		b+=n-arr[temp];
	}
	cout<<a<<" "<<b;
}
