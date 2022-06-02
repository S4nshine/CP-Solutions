#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(long int i=x;i<n;i++)
#define pb(i) push_back(i)
#define pair  pair<int,int >
#define mp(i,j) make_pair(i,j)
#define lint long int
#define ll long long int
#define PI 3.1415926535
#define MOD 1000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main()
{
 	fastio;
//	input;
	int n;
	cin>>n;
	for(int i=9;i>=1;i--) {
		if(n % i == 0) {
			cout<<n/i<<"\n";
			for(int j=0;j<n/i;j++) cout<<i<<" ";
			return 0;
		}
	}
	return 0;
}

