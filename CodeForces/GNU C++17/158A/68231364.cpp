#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(ll  i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
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
	// input;
	fastio;
	int n,k;
	cin>>n>>k;
	int arr[n];
	map<int,int>mp;
	rep(0,n,1) cin>>arr[i];
	int x = arr[k-1];
	if(x == 0) {
		int j  = k-1,ans=0;
		while(j >=0) {
			if(arr[j] > 0 ) ans++;
			j--;
		}
		cout<<ans;
		return 0;
	}
	int i = k;
	while(arr[i] == x) i++;
	cout<<(i-k)+k;
}


 