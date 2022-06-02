#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(ll i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
const int N = 2e5+7;
const int MOD  = 1000000007;
const float PI = 3.1415926535;
//33333333333;
int main() {
  int t;
  cin>>t;
  int arr[5] = {0,1,1,1,0};
  while(t--) {
    int a,b;
    cin>>a>>b;
    if(b == 0) {
        int x = a-(4*(a/4));
        if(arr[x] == 1) cout<<"On"<<endl;
        else cout<<"Off"<<endl;
    }
    else if(b==1) {
        int x = (a%4);
        if(x ==0) cout<<"On"<<endl;
        else cout<<"Ambiguous"<<endl;
    }
  }
}