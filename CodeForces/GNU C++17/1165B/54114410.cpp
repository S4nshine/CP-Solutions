#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define rrep(a,n,b) for(long int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define PI 3.1415926535
#define ll long long int
#define mod 10000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main()
{
	// input;		
	fastio;
	long int n,temp,ans=0;
	cin>>n;
	long int arr[n];
	rep(0,n,1) {
		cin>>arr[i];
	} long int c =1;
	sort(arr,arr+n);
	rep(0,n,1) {
 		if(arr[i]>=c) ans++;
		else {
			while(arr[i] < c and i < n-1) i++;
			if(arr[i]>=c) ans++;
			else break;
		}
		c++;
	}
	cout<<ans;
 }