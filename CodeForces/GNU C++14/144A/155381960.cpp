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


int main() {
    //   input;
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      int min = 0,mx = 0,ans=0;
      for(int i=1;i<n;i++) {
          if(arr[i] <= arr[min]) min = i;
          if(arr[i] > arr[mx]) mx = i;
      }
     // cout<<n-min;
      if(min < mx) ans+= 2;
      else ans+=1;
      cout<<((n-min)+mx)-ans;
    
      
}
/*
7
10 10 58 31 63 40 76
*/