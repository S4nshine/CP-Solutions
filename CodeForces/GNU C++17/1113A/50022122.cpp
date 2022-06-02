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
int main()
{
	fastio;
	//input;
	int n,v,c=0,fuel=0;
	cin>>n>>v;
	if(n<=v) {
		cout<<n-1;
		return 0;
	}
	for(int i=1;i<=n;i++) {
		if(fuel <  n-i) { 
			c = c +((v-fuel)*i);
			fuel = fuel +  v-fuel;
		
		 }
		fuel--;
	}
	cout<<c;

 }
