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



int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
  	 string s,tt;
  	 cin>>s>>tt;
  	 int m = tt.size();
  	 int n =s.size();
  	 bool flag = 0;
  	 if(m == 1 and tt[0] == 'a') {
  	 	cout<<1<<endl;
  	 	continue;
  	 } 
  	 for(int i=0;i<m;i++) {
  	 	 if(tt[i] == 'a')  {
  	 	 	flag = 1;
  	 	 	break;
  	 	 }
  	 }
  	 if(flag) cout<<-1<<endl;
  	 else  {
  	 	  unsigned long long int ans = pow(2,n);
  	 		cout<<ans<<endl;
  	 }

  }
}