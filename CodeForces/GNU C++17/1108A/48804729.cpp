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
//	input;
	int n;
	cin>>n;
	while(n--) {
		int l1,l2,l3,l4;
		cin>>l1>>l2>>l3>>l4;
		if(l1 == l3) l3++;
		cout<<l1<<" "<<l3<<"\n";
	}
}

