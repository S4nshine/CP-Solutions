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

int  solve(string a) {
  int n = a.size();
  for(int i=0;i<n;i++) {
    if(a[i] != '4' and a[i] !='1') return false;
  }
  if(a[0] == '4') return false;
  if(a.find("444") != std::string::npos) return false;
  return true;
}


int main() {
  // input;
  string a;
  cin>>a;
  int x = solve(a);
  if(x) cout<<"YES";
  else cout<<"NO";
}