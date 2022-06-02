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
  int t;
  cin>>t;
  while(t--) {
      int n,ans=1;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      bool flag = (arr[0]%2); // means odd
      for(int i=0;i<n;i+=2) {
        if(arr[i]%2 != flag)  {
          ans = 0;
          break;
        }
      }
      flag = (arr[1]%2);
      for(int i=1;i<n;i+=2) {
        if(arr[i]%2 != flag)  {
          ans = 0;
          break;
        }
      }
      if(ans == 0 ) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
  }
}