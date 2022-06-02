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


int main() {
  // input;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int l=0,r = n-1,ans = 0 ,res = 0,f=1;
  for(int i=0;i<n;i++) {
    if(arr[l] > arr[r])  {
        if(i % 2 == 0) ans += arr[l];
        else res+= arr[l];
        l++;
    }
    else {
        if(i % 2 == 0) ans+=arr[r];
        else res+=arr[r];
        r--;
    }
  }
     cout<<ans<<" "<<res;
} 