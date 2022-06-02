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
  int n;
  cin>>n;
  string s;
  map<string,int>mp;
  for(int i=0;i<n;i++) {
    cin>>s;
    int x = mp[s];
    if(x == 0) cout<<"OK"<<endl;
    else cout<<s<<x<<endl;
    mp[s]+=1;
  }
}