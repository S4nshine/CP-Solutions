#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define pb(i) push_back(i)
#define pair  pair<int,int >
#define mp(i,j) make_pair(i,j)
#define li long int
#define lli long long int
#define PI 3.1415926535
#define MOD 1000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int l,r,d,x=int(10e18);
void solve() {
	for(int i=d;i<=x;i+=d) {
			if(i<=r and i>=l) i=d * ceil(r/d);
			else if(i % d == 0) {
				cout<<i<<"\n";
				return ; 
			} 
		}
}
int main()
{
 	fastio;
	//input;
	int q;
	cin>>q;
	while(q--) {
		cin>>l>>r>>d;
		solve();
	}
	return 0;
}