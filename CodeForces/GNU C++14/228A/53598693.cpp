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
  int n=4,temp,ans=0;
  unordered_map<int,int>mp;
  rep(0,n,1) {
    cin>>temp;
    if(mp[temp]) ans++;
    else mp[temp] = 1;
  } cout<<ans;
}