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
    int n,flag=0;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    loop(n) {
      cin>>arr[i];
      mp[arr[i]]+=1;
    }
    int brr[n];
    loop(n) {
      cin>>brr[i];
      mp[arr[i]]+=1; 
    }
    vector<pair<int,int>>dp;
    loop(n) 
      dp.push_back({arr[i],brr[i]});
    sort(dp.begin(),dp.end());
    vector<pair<int,int>>dp1;
    loop(n) {
      int x = mp[arr[i]];
      int y = mp[brr[i]];
      if(arr[i]  == dp[i].ff and brr[i] == dp[i].ss) ;
      else {
        for(int j=i+1;j<n;j++) {
          if(arr[j] == dp[i].ff and brr[j] == dp[i].ss) {
            swap(arr[i],arr[j]);
            swap(brr[i],brr[j]);
            dp1.push_back({i+1,j+1});
          }
        }
      }
    }
    for(int i=1;i<n;i++) {
      if(dp[i].ff >=dp[i-1].ff and dp[i].second >= dp[i-1].second) ; 
      else flag = 1;
    }
    if(flag) cout<<-1<<endl;
    else  {
      cout<<dp1.size()<<endl;
      for(auto x : dp1) cout<<x.ss<<" "<<x.ff<<endl;
    }
  }
}