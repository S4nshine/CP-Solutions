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
	string a;
	cin>>a;
	rep(1,a.size(),1) {
		if(a[i] == a[i-1]) {
			int c =1;
			while(a[i] == a[i-1] and  i < a.size()) {
				i++;
				c++;
			}
			if(c>=7) {
				cout<<"YES";
				return 0;
			}
			c =0;
		}
	}
	cout<<"NO";
} 
