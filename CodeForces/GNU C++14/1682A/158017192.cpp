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
     int n,c=0; cin>>n;
     string s;
     cin>>s;
     for(int i=(n+1)/2;i<n;i++) {
       if(s[i] != s[n/2]) break;
       c = c + 2;
     }
     cout<<c+(n%2)<<endl;
  } 
}