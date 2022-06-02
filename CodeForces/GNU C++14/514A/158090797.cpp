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
  string s;
  cin>>s;
  int flag = 0;
  if(s[0]-'0' == 9) {
    cout<<9;
    flag = 1;
  }
  for(unsigned long long int i=flag;i<s.size();i++) {
    unsigned long long int x = s[i] - '0';
    if(x >=5 ) cout<<9-x;
    else cout<<x;
  }
}