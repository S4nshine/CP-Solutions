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
  int n,temp,ans=0,trace=0;
  cin>>n;
  rep(0,n,1) {
    int a,b;
    cin>>a>>b;
    ans-=a;
    ans+=b;
    trace=max(ans,trace); 
  } cout<<trace;

}