#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(ll i=a;i<n;i+=b)
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
int main() {
    int t;
    cin>>t;
    while(t--) {
    	int n,f=0,sum=0;
    	cin>>n;
    	int arr[n];
    	rep(0,n,1) cin>>arr[i];
    	int i = 0;
    	if(n==1) {
    		if(arr[0]%2==0) cout<<1<<endl<<1<<endl;
    		else cout<<-1<<endl;
    		continue;
    	} 
    	for(;i<n;i++) {
    		if(arr[i] % 2 == 0) {
    			f = 1;
    			break;
    		}
    		else 
    			sum+=arr[i];
    		if(sum  % 2 == 0) {
    			f = 2;
    			break;
    		}
    	}
    	if(f == 1) cout<<1<<endl<<i+1<<endl;
    	else if(f ==2) 
    		cout<<2<<endl<<i<<" "<<i+1<<endl;
    	else cout<<-1<<endl;
    }
}
