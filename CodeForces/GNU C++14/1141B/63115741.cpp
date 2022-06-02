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
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333;
int main()  {
	// input;  
	fastio;
	long long int n,a=0,ans=0,index;
	cin>>n;
	int arr[n];
	rep(0,n,1) {
		cin>>arr[i];
	}
	int i=0;
	while(arr[i] and  i < n) {
		a++;
		i++;
	} 
	for(;i<n;i++)  {
		int c = 0;
		if(arr[i]) {
			while(arr[i] and i < n) {
					c++;
					i++;
			}
		}
		if(c >= ans) {
			index = i;
			ans = c;
		}
	} 
	if(index == n)
		cout<<ans+a;
	else 
		cout<<max(ans,a);
}	