#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define INTMAX 100000000000000000
#define mod 10000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input; 
  fastio;
  int n,ans=0;
  cin>>n;
  string a;
  cin>>a;
  if(a[0] == '-') {
    int i =0;
    while(i < n and a[i] == '-') {
      i++;
      ans++;
    }
  }
  rep(0,n,1) {
    if(a[i] == '-' and ans > 0) ans--;
    else if(a[i] == '+') ans++;
  } cout<<ans;
}