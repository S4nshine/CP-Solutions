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

void solve(string a,string b) {
    int n = a.size();
    int m = b.size();
    int ans = 0;
    int res = 0;
    if(a > b) {
        
    }
   // cout<<ans<<" "<<res<<endl;
}
int main() {
     //s input;
      int n;
      cin>>n;
      int a,b,c;
      int arr[3] = {0};
      for(int i=0;i<n;i++) {
         cin>>a>>b>>c;
         arr[0] +=a;
         arr[1] +=b;
         arr[2]+=b;
      }
      if(arr[0] ==0 and arr[1] == 0 and arr[2] ==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}