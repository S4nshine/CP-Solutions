#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define rrep(a,n,b) for(long int i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")<<endl
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
	int n;
	cin>>n;
	int arr[n];
	queue<int>q;
	rep(0,n,1) cin>>arr[i];
	for(int i=1;i<n;i++) {
		if(arr[i] <= arr[i-1]) q.push(arr[i-1]);
	} q.push(arr[n-1]);
	cout<<q.size()<<endl;
	while(!q.empty()) {
		cout<<q.front()<<" ";
		q.pop();
	}
 }