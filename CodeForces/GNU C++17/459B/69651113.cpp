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
int main() 
{ 
	 ll n,temp;
	cin>>n;
	vector<ll>arr;
	map< ll,ll>mp;
	rep(0,n,1) {
		cin>>temp;
		if(mp[temp]) ;
		else arr.push_back(temp);
		mp[temp]+=1;
	}
	sort(all(arr));
	n = arr.size();
	if(n==1) {
		ll  x = mp[arr[0]];
		cout<<0<<" "<<(x*(x-1))/2;
		return 0;
	}
	cout<<arr[n-1]-arr[0]<<" "<<mp[arr[n-1]]*mp[arr[0]];
}
