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
    int n;
    cin>>n;
    if(n==1) cout<<0<<endl;
    else if( n == 2 or n == 3) cout<<1<<endl;
    else cout<<((n/5)*2)+(n%5 > 1)<<endl;
  }
}