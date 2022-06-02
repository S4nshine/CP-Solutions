#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(ll i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
const int N = 2e5+7;
const int MOD  = 1000000007;
const float PI = 3.1415926535;
//33333333333;
int solve(int n,long long  int arr[]) {
    int ans = 0;
    map<long long int,int>dp;
    for(int i=0;i<n;i++) {
       // if(dp[arr[i]] > 0) return -1; 
        if(arr[i] < arr[ans]) ans = i;
        dp[arr[i]]+=1;
    }
    if(dp[arr[ans]] > 1) return -1; 
    return ans;
}

int main() {
  // input;
  int n;
  cin>>n;
  long long int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int x = solve(n,arr);
  if(x == -1) cout<<"Still Rozdil"<<endl;
  else cout<<x+1<<endl;
}