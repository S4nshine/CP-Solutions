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
//33333333333;
int main() 
{ 
	// input;
	fastio;
	int t;
	cin>>t;
	while(t--) {
		string a;
		cin>>a;
		int n = a.size();
		if(a[n-1]  == 'o' and a[n-2] == 'p') {
			cout<<"FILIPINO"<<endl;
		}
		else {
			string x =a.substr(n-4,n);
			if(x == "desu" or x ==  "masu") cout<<"JAPANESE"<<endl;
			else cout<<"KOREAN"<<endl;
		}
	}
} 