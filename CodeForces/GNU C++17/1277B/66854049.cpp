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
		ll  n,temp;
		unsigned ll c=0;
		cin>>n;
		vector<ll>a;
		map<ll,int>arr;
		rep(0,n,1) {
			cin>>temp;
			if(temp % 2==0 and  arr[temp] ==0) {
				arr[temp] = 1;
				a.push_back(temp);
			}
		}
		ll  x = a.size();
		if(x) {
		   sort(all(a));
			x--;
	    	while(x>=0) {
			    if(arr[a[x]]) {
					while(a[x] % 2==0) {
						if(arr[a[x]]) arr[a[x]] =0;
						a[x]/=2;
						c++;
					}
				}
				x--;
			} 
		    
		}
		cout<<c<<endl;
	}
} 