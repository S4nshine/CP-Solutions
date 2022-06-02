#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int ans;
int main() {
  // input;
   string a;
   cin>>a;
   set<char>s(a.begin(),a.end());
   cout<<(s.size() %2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}     