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
     int n;
     cin>>n;     
     int arr[n];
     map<int,int>mp;
     for(int i=0;i<n;i++) {
        cin>>arr[i];
        mp[arr[i]]+=1;
     }
     int ans = 0;
     int res = 0;
     for(auto x : mp ) {
        int tmp = 0;
        if(x.ss > 1)
          tmp = x.ff + x.ss;
        if(mp[tmp-1]) {
            continue;
        }
        else ans = max(ans,tmp-1);
        res = max(res,x.ff);
        
     }
   //  if(res > ans) cout<<1<<" ";
     cout<<max(res,ans)<<endl;
  }
} 