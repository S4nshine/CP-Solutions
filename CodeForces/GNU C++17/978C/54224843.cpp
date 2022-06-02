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
	long long int n,m,temp;
	cin>>n>>m;
	long long int dp[n];
	cin>>dp[0];
	rep(1,n,1){
		cin>>temp;
		 dp[i] = dp[i-1]+temp;
	} int c= 0;
	while(m>0) {
		cin>>temp;
		for(int i=c;i<n;i++) {
			if(dp[i]>=temp) {
				if(i==0) { 
					cout<<i+1<<" "<<temp<<endl;
					c =i;
					break;
				}
				else  {
					cout<<i+1<<" "<<abs(temp-dp[i-1])<<endl;
					c = i;
					break;
				}
			}
		}
		m--;
	}
 }