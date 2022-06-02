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
  int n,m,r,temp,x=INT_MAX,z=0,flag=0;
  cin>>n>>m>>r;
  rep(0,n,1)  {
    cin>>temp;
    if(x > temp and temp <= r) {
      x = temp;
    } 
  } flag = (r%x==0 ? 0 : r-(x*(r/x)));
  rep(0,m,1) {
    cin>>temp;
    if(temp > z and temp > x) z = temp;
  } 
  cout<<max((int)ceil(r/x)*z+flag,r);
  return 0;
}