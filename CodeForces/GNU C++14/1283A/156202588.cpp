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
  int t;
  cin>>t;
  while(t--) {
    int h,m;
    cin>>h>>m;
    h = abs(24-(h+1));
    int ans = (60*h)+(60-m);
    cout<<ans<<endl;
  }
} 