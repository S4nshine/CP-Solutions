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
//  input;
  fastio;
  int n;
  cin>>n;
  int arr[n];
  rep(0,n,1) cin>>arr[i];
  int x = arr[0],y=arr[0],ans=0;
  rep(1,n,1) {
	  if(arr[i] < x) {
		  x = arr[i];
		  ans++;
	  }
	  if(arr[i] > y) {
		  y = arr[i];
		  ans++;
	  }
  } cout<<ans;
}     