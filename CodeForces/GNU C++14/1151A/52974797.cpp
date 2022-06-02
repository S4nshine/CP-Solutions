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
  //  input;
    fastio;
    int n,ans=INT_MAX;cin>>n;
    string a;
    cin>>a;
    rep(0,n,1) {
      if((n-i) < 4) break;
      int x = min(abs(a[i]-'A'),26-(abs(a[i]-'A'))) + min(abs(a[i+1]-'C'),26-(abs(a[i+1]-'C'))) + min(abs(a[i+2]-'T'),26-(abs(a[i+2]-'T'))) + min(abs(a[i+3]-'G'),26-(abs(a[i+3]-'G')));
      ans = min(x,ans);
    } cout<<ans;
  
}    