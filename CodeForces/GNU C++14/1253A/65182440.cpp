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
int arr[N];
int main()  {
	// input;
	fastio;
	int t;
	cin>>t;
	while(t--) {
		int n,ans=1,x;
		cin>>n;
		int arr[n];
		rep(0,n,1) {
			cin>>arr[i];
		}
		int brr[n];
		rep(0,n,1) cin>>brr[i];
		int f = 0;
		rep(0,n,1) {
			if(arr[i] != brr[i]) {
				if(f) {
					ans  = 0 ;
					break;
				}
				f=1;
				int x = brr[i]-arr[i];
				if(x<=0) {
					ans =0 ;
					break;
				}
				else {
					while(arr[i]!=brr[i] and i < n) {
						if(brr[i]-arr[i] != x) {
							ans =0;
							break;
						}
						i++;
					}
				}
 			}
		}
		if(ans) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}