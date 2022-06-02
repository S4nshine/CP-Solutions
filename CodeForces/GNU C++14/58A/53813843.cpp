#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define INTMAX 100000000000000000
#define mod 10000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input; 
  fastio;
  string  b = "hello"; int flag = 0;
  string a;
  cin>>a;
  int i=0,j=0;
  while(i<a.size()) {
    if(a[i] == b[j])  j++; 
    i++;
  } if(j>4) cout<<"YES"; else cout<<"NO";
}