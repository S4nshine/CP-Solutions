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
	int t;
	cin>>t;
	while(t--) {
		int n,flag=0;
		cin>>n;
		string a;
		cin>>a;
		if(a[n-11] == '8') {
			cout<<"YES\n";
			continue;
		}
		else  {
			if(n > 11) {
				int i=0, x = abs(n-11);
				while(i<x) {
					if(a[i] =='8') {
						flag=1;
						break;
					}
					i++;
				}
				
			}
		} pchr(flag);
	}
 }