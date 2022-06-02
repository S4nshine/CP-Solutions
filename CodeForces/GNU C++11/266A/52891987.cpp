#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int n,l,ans;
int main() {
  // input;
   fastio;
   cin>>n;
   string a;
   cin>>a;
   vector<char>arr;
   arr.push_back(a[0]);
   rep(1,n,1) {
      if(arr[l] == a[i]) ans++;
      else{ l++; arr.push_back(a[i]); }
   } cout<<ans;
}   