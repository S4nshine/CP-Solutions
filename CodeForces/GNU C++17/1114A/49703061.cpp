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
int x,y,z,a,b,c,sum;
bool solve() {
	
	if(x > a) return 0;
	sum  = sum -x; 
	a = a-x;
	if(y  > b+a) return 0;
     sum = sum - y;
	if(z > sum ) return 0;
	return 1;

}
int main() 
{
	fastio;
//	input;
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	sum = a+b+c;
	if(solve()) cout<<"YES";
	else cout<<"NO";

 }

