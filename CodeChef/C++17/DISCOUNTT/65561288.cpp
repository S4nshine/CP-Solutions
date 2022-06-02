#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
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
    int n,x,y,sum=0,ans=0,res=0;
    cin>>n>>x>>y;
    int arr[n];
    loop(n) {
      cin>>arr[i];
      sum+=arr[i];
      res+=max(arr[i]-y,0);
    }
    if(res+x  < sum) cout<<"COUPON"<<endl;
    else cout<<"NO COUPON"<<endl;
  }
}