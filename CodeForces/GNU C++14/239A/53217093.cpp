#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int n,k,x,y,flag;
int main() {
  // input;
  fastio;
  cin>>y>>k>>n;
  for(int i=k*(ceil(y/k)+1);i<=n;i+=k) {
    if(i%k ==0) { cout<<i-y<<" "; flag=true;}
  } if(!flag) cout<<-1;
}     