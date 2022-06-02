#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
  string a,b;
  cin>>a>>b;
  int n = a.size();
  rep(0,n,1) {
    if(a[i] != b[n-(i+1)]) {
      cout<<"NO";
      return 0;
    }
  } cout<<"YES";  
}     