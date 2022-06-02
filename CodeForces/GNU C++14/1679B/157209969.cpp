#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long int
#define pflag(flag) if(flag) cout<<"YES"; else cout<<"NO";
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333333



bool isvowel(char s) {
  if(s == 'a' or s == 'e' or s == 'i' or s =='o' or s == 'u') return true;
  return false;
}
int arr[500005];
int dp[500005];
int main() {
  // input;
  int n,q;
  cin>>n>>q;
  unsigned long long int ans=0;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
    ans = ans + arr[i];
  }
  int changed = 0,dpth=0;
  map<int,int>mp;
 for(int j=1;j<=q;j++) {
    int x,i,ele;
    cin>>x;
    if(x == 1)  {
      cin>>i>>ele;
      if(dp[i-1] != changed) {
         ans +=ele-dpth;
         dp[i-1] = j;
      }
      else ans+=ele-arr[i-1];
      dp[i-1] = changed;arr[i-1] = ele; 
    }
      if(x == 2) {
        cin>>ele;
        changed++;
        ans = 1ll*ele*n;
        dpth = ele;
      }
      cout<<ans<<endl;
    }
}