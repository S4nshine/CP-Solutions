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
	int n,l=-1,c=0;	
	cin>>n;
	string a;
	cin>>a;
	string arr;
	arr+=a[0];
	arr+=a[1];
	l = 1;
	for(int i=2;i<n;i++) {
		if(a[i] == 'x' and arr[l] == 'x' and arr[l-1] == 'x') { c++; continue;}
		l++;
		arr+=a[i];
 	}
	 cout<<c;
 }