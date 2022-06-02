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
  int n,k;
  cin>>n>>k;
  for(int i=k+1;i>0;i--) {
    cout<<i<<" ";
  }
  for(int i=k+2;i<=n;i++) cout<<i<<" ";
}