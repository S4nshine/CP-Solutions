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
    int n,ans=0,res=0;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++) {
      cin>>arr[i];
      mp[arr[i]]+=1;
    }
    for(auto x : mp) {
      if(x.ss == 1) res++;
      else ans++;
    }
    cout<<ans+(res+1)/2<<endl;
  }
}