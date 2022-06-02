#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define pb(i) push_back(i)
#define pair  pair<int,int >
#define li long int
#define lli long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
long long int n,c,x;string temp;
int main() {
  //input;
  fastio;
  int n,k;
  cin>>n;
  vector<pair>arr;
  fo(0,n) {
    int a,b;
    cin>>a>>b;
    arr.push_back(pair(a,b));
  } cin>>k;
  int i =1;
  for( auto x : arr) {
    if(x.second >= k) {
      cout<<(n-i)+1;
      return 0;
    }
    i++;
  }
}