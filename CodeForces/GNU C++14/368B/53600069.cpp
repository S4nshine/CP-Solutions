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
int dp[(int)10e5];
int main() {
  // input;
  fastio;
  int n,q,temp,c=1;
  cin>>n>>q;
  unordered_map<int,int>mp;
  int arr[n+1];
  rep(1,n+1,1) cin>>arr[i];
  for(int i=n;i>0;i--) {
    if(mp[arr[i]]) dp[i] = c-1;
    else {
     mp[arr[i]] = 1; 
     dp[i] = c++;
    }
  }
  rep(0,q,1) {
    cin>>temp;
    cout<<dp[temp]<<endl;
  }
}