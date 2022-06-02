
#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
#define iter(obj) for(aauto x : obj) 
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
//00nput;
	fastio;
	int n=4,sum=0;
	int arr[n];
	rep(0,n,1) cin>>arr[i];
	sort(arr,arr+n);
	if(arr[0]+arr[3] == arr[1]+arr[2]) cout<<"YES";
    else if(arr[0]+arr[2]  == arr[1]+arr[3]) cout<<"YES";
	else if(arr[0]+arr[1] == arr[2]+arr[3]) cout<<"YES";
	else {
		for(int i=n-2;i>=0;i--) sum+=arr[i];
		if(sum == arr[n-1]) cout<<"YES";
		else cout<<"NO";
	}
}
