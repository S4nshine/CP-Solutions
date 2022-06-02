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
    unsigned long long int n;
    cin>>n;
    if(n  == 4 or n == 6) {
      cout<<1<<" "<<1<<endl;
      continue;
    }
    if(n % 2 or n < 4) {
      cout<<-1<<endl;
      continue;
    }
    int flag = (n%6!=0);
    cout<<(n/6)+flag<<" "<<n/4<<endl;
  }
}