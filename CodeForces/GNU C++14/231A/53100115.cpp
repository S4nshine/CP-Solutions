#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int n,temp,ans;
int main() {
//   input;
  cin>>n;
  vector<int>arr; 
  rep(0,n,1) {
     arr.push_back(0);
     for(int j=0;j<3;j++) { cin>>temp; arr[i]+=temp; }
  }
  rep(0,n,1) ans+=(arr[i]>=2);
  cout<<ans;
}     