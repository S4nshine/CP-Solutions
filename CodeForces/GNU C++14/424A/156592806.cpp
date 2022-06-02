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
  int n,low=0,up=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++) {
     if(s[i] == 'x') low++;
     else up++;
  }
  int x = n/2;
  int res = min(abs(x-low),abs(x-up));
  if(low > up)  {  // make  x - up stand 
      int ans = abs(x-up);
      int i = 0;
      while(ans and i < n) {
         if(ans == 0 ) break;
         if(s[i] == 'x') {
           s[i] = 'X';
           ans--;
         }
         i++;
      }
  }
  else  {
     int ans = abs(x-low);
     int i = 0;
      while(ans and i < n) {
         if(ans == 0 ) break;
         if(s[i] == 'X') {
           s[i] = 'x';
           ans--;
         }
         i++;
      }
  }
  cout<<res<<"\n";
  cout<<s;
}