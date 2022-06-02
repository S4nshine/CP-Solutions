#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define ot(x) cout<<x
#define nl cout<<endl;
#define sc cout<<" "
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
	fastio;
	int t;
	cin>>t;
	while(t--) {
		int sum =0,c=0,eve=0;
		string a;
		cin>>a;
		int i = 0;
		while(a[i]  == '0' and  i < a.size()) i++;
		c = i;
		eve = i;
		for(;i<a.size();i++) {
			int x = a[i] - '0';
			sum +=x;
			if(x%2==0) eve++;
			if(x == 0) c++;
		} 
		if(sum % 3 == 0 and c > 0 and eve >=2) cout<<"red"<<endl;
		else cout<<"cyan"<<endl;

	}
}


 