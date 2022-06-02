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
//	input;
	fastio;
	int t;
	cin>>t;
	while(t--) {
		int n,k,temp;
		cin>>n>>k;
		vector<int>arr;
		map<int,int>mp;
		rep(0,n,1) {
			cin>>temp;
			if(mp[temp]) ;
			else {
				mp[temp] = 1;
				arr.push_back(temp);
			}
		} n = arr.size();
		sort(all(arr)); 
		int x = (arr[n-1]-arr[0]);
		if(x % 2 == 1) x= x/2 + 1;
		else x = x/2;
		if(x > k) cout<<-1<<endl;
		else cout<<arr[0]+k<<endl;
	}
}