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

// 2 3 4 5 6 10

bool isvowel(char s) {
  if(s == 'a' or s == 'e' or s == 'i' or s =='o' or s == 'u') return true;
  return false;
}
int c = 0;


int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    int n,m,ans=0,res=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ans =  arr[n-1] * 2;
    for(int i=1;i<n;i++) {
       ans = max(ans,arr[i] + arr[i-1] + ((arr[i-1] - arr[i] + m) %m));
    }
    cout<<ans<<endl;
  }
}