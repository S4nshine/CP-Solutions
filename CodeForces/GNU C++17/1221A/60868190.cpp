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
	int t;
	cin>>t;
	while(t--) {
	int n,temp,ans=2048,sum=0,x;
	cin>>n;	map<int,int>mp;
	rep(0,n,1) {
		cin>>temp;
		if(mp[temp]) mp[temp]+=1;
		else {
			mp[temp] = 1;
		}
	}
	for(auto z : mp) {
		if(z.ss  >=2) {
			while(z.ss>1) {
				x= z.ff*2;
				if(mp[x]) mp[x]+=1;
				else mp[x] = 1;
				z.ss-=2;
			}
		
		}
	} 
	 if(mp[ans]) cout<<"YES\n";
	else cout<<"NO\n";
	}
	return 0;
}