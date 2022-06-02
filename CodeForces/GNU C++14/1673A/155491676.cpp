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



void solve(string a) {
  int n = a.size();
  int flag = (n & 1);
  int i = 0;
  int ans = 0,res = 0;
  if(flag) {
    for(int i=0;i<n-1;i++) {
      ans+=a[i] - '`';
     }
    for(int i=n-1;i>0;i--) res+=a[i] - '`';
    if(res > ans) {
      if(res > a[0]-'`') cout<<"Alice "<<res-(a[0]-'`');
      else cout<<"Bob "<<(a[0]-'`')-res;
    }
    else {
      if(ans >  a[n-1]-'`') cout<<"Alice "<<ans-(a[n-1]-'`');
      else cout<<"Bob "<<(a[n-1]-'`')-ans;
    }
    cout<<endl;
  }
  else  {
     for(int i=0;i<n;i++) ans += a[i] - '`';
     cout<<"Alice " <<ans<<endl;
  }
}
int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    string a;
    cin>>a;
    solve(a);
  }
}
/*
5
aba
abc
cba
n
codeforces
*/