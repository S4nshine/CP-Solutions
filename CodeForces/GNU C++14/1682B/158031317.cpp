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
int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    int n; cin>>n;
    int arr[n];
    int dup[n];
    for(int i=0;i<n;i++) {
      cin>>arr[i];
      dup[i]= arr[i];
    }
    sort(dup,dup+n);
    int ans = -1;
    for(int i=0;i<n;i++) {
      if(arr[i] != dup[i]) ans&=arr[i];
    }
    cout<<ans<<endl;
  }
}