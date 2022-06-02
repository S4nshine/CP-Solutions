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
//333333333
int main()  {
//	input;
	fastio;
	int n,temp,ans=0;
	cin>>n;
	vector<int>arr;
	map<int,int>mp;
	rep(0,n,1) {
		cin>>temp;
		if(mp[temp]) ;
		else {
			mp[temp] = 1;
			arr.push_back(temp);
		}
	}
	sort(all(arr));
	map<int,int>mp1;
	n = arr.size();
	for(int i=0;i<n;i++) {
		if(mp1[arr[i]]) continue;
		for(int j=i+1;j<n;j++) {
			if(arr[j]%arr[i] == 0) {
				mp1[arr[j]] = 1;
			}
		}
	}
	for(auto x : mp1) {
		if(x.ss ==0 ) ans = ans + 1;
	} cout<<ans<<endl;
}