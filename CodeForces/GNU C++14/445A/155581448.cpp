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

int dp[100000];


int main() {
  // input;
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++) {
  	string s;
  	cin>>s;
  	for(int j=0;j<m;j++) {
  		if(s[j] == '-')  {
  			cout<<"-";
  			continue;
  		}
  		if(i%2) {
  			if(j%2) cout<<"W";
  			else cout<<"B"; 
  		}
  		else {
  			if(j%2) cout<<"B";
  			else cout<<"W";
  		} 
  	}
  	cout<<endl;
  }
}