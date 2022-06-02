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
     int n;
     cin>>n;
     if(n <= 1399) cout<<"Division 4";
     else if(n >=1400 and n <=1599) cout<<"Division 3";
     else if(n >=1600 and n <= 1899) cout<<"Division 2";
     else cout<<"Division 1";
     cout<<endl;
  }
}