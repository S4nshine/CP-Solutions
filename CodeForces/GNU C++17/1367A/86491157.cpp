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
//	input;
//	fastio;
    int t;
    cin>>t;
    while(t--) {
		 string a;
		 cin>>a;
		 int n = a.size();
		 if(n % 2 == 0 )  {
			 for(int i=0;i<n-1;i+=2) cout<<a[i];
			 cout<<a[n-1];
		 }
		 else {
			 for(int i=0;i<n;i+=2) cout<<a[i];

		 }
		 cout<<endl;
	}
}