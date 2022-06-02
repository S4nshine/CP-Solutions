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
  int n;
  cin>>n;
  int arr[n];
  rep(0,n,1) cin>>arr[i];
  int l = 0,r=n-1,m=0;
  queue<char>q;
  while(l<=r) {
    if(arr[l] < arr[r] ) {
      if(arr[l] > m) {
      q.push('L');
      m = arr[l];
      l++;
      } 
      else  if(arr[r] > m) {
        q.push('R');
        m = arr[r];
        r--;
      } else break;
      continue;
    } else  {
      if(arr[r] > m)  {
        q.push('R');
        m = arr[r];
        r--;
      } else if(m < arr[l])  {
        q.push('L');
        m = arr[l];
        l++;
      } else break;
    }
  } cout<<q.size()<<endl;
  while(!q.empty()) {
    cout<<q.front();
    q.pop();
  }
}