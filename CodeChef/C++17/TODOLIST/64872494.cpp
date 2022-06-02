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

// 2 3 4 5 6 10

bool isvowel(char s) {
  if(s == 'a' or s == 'e' or s == 'i' or s =='o' or s == 'u') return true;
  return false;
}
int c = 0;


int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    int n,temp,ans=0;
    cin>>n;
    for(int i=0;i<n;i++) {
      cin>>temp;
      if(temp >= 1000) ans = ans + 1;
    }
    cout<<ans<<endl;
  }
}