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
int dp[int(10e5)];
int dup[int(10e5)];
int x,y;
int main()
{
 	fastio;
//	input;
	int n;
	cin>>n;
	for(int i=9;i>=1;i--) {
		if(n % i==0) {
			cout<<n/i<<"\n";
			for(int j=0;j<n/i;j++) cout<<i<<" ";
			return 0;
		}
	}
}