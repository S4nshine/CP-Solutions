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
     int n,x,y;
     cin>>n>>x>>y;
     int ans = (n-x+x-1)+(n-y+y-1) + min(x-1,y-1) + min(x-1,n-y) + min(n-x,y-1) + min(n-x,n-y);
    cout<<ans<<endl;
  }
} 