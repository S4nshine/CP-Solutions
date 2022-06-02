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
     long long int  x;
     cin>>x;
     x *=50;
     long long int  ans = (x*30)/100;
     cout<<ans<<endl;
   }
} 