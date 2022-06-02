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
	int n;
	cin>>n;
	int arr[2] = {0,0};
	rep(0,n,1) {
		int x,y;
		cin>>x>>y;
		if(x > y) arr[0]++;
		else if(y > x) arr[1]++;
	}
	if(arr[0] > arr[1]) cout<<"Mishka";
	else if(arr[1] > arr[0]) cout<<"Chris";
	else cout<<"Friendship is magic!^^";
}