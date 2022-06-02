#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define INTMAX 100000000000000000
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
  int n,m;
  cin>>n>>m;
  string a,b;
  vector<pair<string,string>> arr;
  rep(0,m,1) {
    cin>>a>>b;
    arr.push_back({a,b});
  } 
  rep(0,n,1) {
    cin>>a;
    for(auto x : arr) {
      if(x.first == a or x.second == a) {
        if(x.first.size() > x.second.size()) cout<<x.second<<" ";
        else cout<<x.first<<" "; 
      }
    }
  }
  
}