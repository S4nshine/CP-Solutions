#include<bits/stdc++.h>
#
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
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
ll arr[N];
//33333333333;
int main() 
{ 
	// input;
	fastio;
	string s;
	cin>>s;
	int x = count(all(s),'7')+count(all(s),'4');
	string a = to_string(x);
	rep(0,a.size(),1) {
		if(a[i] != '4' and  a[i] != '7') {
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
} 
