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
int solve(int n) {
  return n % 4==0 or n % 7 ==0 or n % 47 == 0  or n % 74 ==0 or n % 447 ==0 or n % 474 ==0 or n % 477==0 or n % 744 ==0 or n %747 == 0 or  n % 774==0;
}

int main() {
  // input;     
  fastio;
  int n;
  cin>>n;
  int ans = solve(n);
  if(ans) cout<<"YES";
  else cout<<"NO";
}