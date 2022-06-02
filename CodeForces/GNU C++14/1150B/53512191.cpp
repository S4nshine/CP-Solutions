#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define INTMAX 100000000000000000
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
  int n,c=0;
  cin>>n;
  int arr[n][n];
  rep(0,n,1) {
    string a;
    cin>>a;
   for(int j=0;j<n;j++)  {
     if(a[j] == '#') arr[i][j] = 0;
     else {
       arr[i][j] = 1;
       c++;
     }
   }
  } 
  for(int i=0;i<n-1;i++) {
   for(int j=1;j<n-1;j++) {
     if(arr[i][j] and arr[i-1][j] and arr[i+1][j] and arr[i][j+1] and arr[i][j-1]) {
       arr[i][j] = 0;
       arr[i-1][j] =0;
       arr[i+1][j] = 0;
       arr[i][j+1] = 0;
       arr[i][j-1] = 0;
       c-=5;
     }
   }
 } if(c==0) cout<<"YES";
 else cout<<"NO";
}