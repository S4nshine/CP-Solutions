// https://codeforces.com/contest/703/problem/A
#include<bits/stdc++.h>
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
 
int main()  {
	// input;
	fastio;
	int t;
	cin>>t;
	while(t--) {
		int arr[3]  = {1,2,5};
		int a,b,c=0;
		cin>>a>>b;
		int x = 2;
		if(a > b)  swap(a,b);
		while(a < b) {
			if(x == -1) x = 2;
			if(b-a >= arr[x]) {
				int z = ceil((b-a)/arr[x]);
				a +=(arr[x]*z);
				c+=z;
			}
			else {
				while(b-a < arr[x] && x > -1) x--;
			}
		} 
		cout<<c<<endl;
	}
	return 0;
}