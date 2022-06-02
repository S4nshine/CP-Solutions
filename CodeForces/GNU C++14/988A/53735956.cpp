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
int dp[101];
int main() {
  // input;
  fastio;
  int n,k,temp;
  cin>>n>>k;
  queue<int>q;
  rep(0,n,1) {
    cin>>temp;
    if(dp[temp]) continue;
    dp[temp]  = 1;
    q.push(i+1);
    k--;
    if(k==0) break;
  } 
  if(k==0) {
     cout<<"YES\n";
     while(!q.empty()) {
       cout<<q.front()<<" ";
       q.pop();
     }
   } 
  else cout<<"NO";
}