#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
  int n,m,temp,ans=0;
  cin>>n>>m;
  vector<int>even;
  vector<int>odd;
  rep(0,n,1) {
    cin>>temp;
    if(temp % 2==0) even.push_back(temp);
    else odd.push_back(temp);
  }
  rep(0,m,1) {
    cin>>temp;
    if(temp  %  2==0 and odd.size()) {
      odd.pop_back();
      ans++;
    }
    else  {
      if(temp % 2 and even.size()) {
        ans++;
        even.pop_back();
      }
    }
  } cout<<ans;
}     