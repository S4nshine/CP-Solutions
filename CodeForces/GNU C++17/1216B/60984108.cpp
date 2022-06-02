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
	//input;
	fastio;
	int n,temp,x=0,ans=0;
	cin>>n;
	vector<int>arr[1001];
	vector<int>a;
	map<int,int>mp;
	rep(0,n,1) {
		cin>>temp;
		if(mp[temp]) ;
		else {
			mp[temp] = 1;
			a.push_back(temp);
		}
		arr[temp].push_back(i+1);
	} unordered_set<int>s;
	sort(all(a));
	 n = a.size();
	int z = 0;
	vector<int>aa;
	for(int i=n-1;i>=0;i--) {
		sort(all(arr[a[i]]));
		for(auto x : arr[a[i]]) {
			ans +=(a[i]*z)+1;
			aa.push_back(x);
		   z++;
		}
	} 
	cout<<ans<<endl;
	for(auto x : aa) cout<<x<<" ";
}