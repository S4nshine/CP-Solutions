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
  int n,m,ans=0;
  cin>>n>>m; 
  int arr[n+1];
  fill(arr,arr+n+1,1);
  rep(1,n+1,2) {
    if(m==0) break;
    arr[i] = 0;
    m--;
  } if(m)  {
    rep(2,n+1,2)  {
      if(m==0) break;
      arr[i] =0;
      m--;
    }
  }
  rep(1,n+1,1) {
    if(arr[i]) {
      while(arr[i]) i++;
      ans++;
    } 
  } 
  cout<<ans;
}