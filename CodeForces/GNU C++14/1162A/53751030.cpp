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
  int n,h,m;
  cin>>n>>h>>m;
  int arr[n+1] ;
  fill(arr,arr+(n+1),INT_MAX);
  rep(0,m,1) {
    int l,r,x;
    for(int j=0;j<3;j++) {
      cin>>l>>r>>x;
      while(l<=r) {
        arr[l] = min(arr[l],x);
        l++;
      }
    }
  } int ans = 0;
  rep(1,n+1,1){
    if(arr[i] == 0)continue;
    if(arr[i]==INT_MAX) ans+=pow(h,2);
    else ans+=pow(arr[i],2);
  } cout<<ans;
}