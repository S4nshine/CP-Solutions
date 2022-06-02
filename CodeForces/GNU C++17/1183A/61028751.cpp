#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define PI 3.1415926535
#define ll long long int
#define mod 1000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333;
int main()  {
//	input;
	fastio;
	int n,x=1003;
	cin>>n;
	int a = n;
	while(a) {
		int sum =0;
		while(n>=1) {
			sum+=n%10;
			n= n/10;
		} 
		if(sum %4 ==0) {
			cout<<a;
			return 0;
		}
		a = a + 1;
		n = a;
	} 
}