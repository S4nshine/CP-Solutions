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
	int n,k;
	cin>>n>>k;
	string a;
	cin>>a;
	fo(0,k) {
		for(int j=0;j<n;j++) {
			if(a[j+1] == 'G' and a[j] == 'B') { swap(a[j+1],a[j]); j++; }
		}
	}
	cout<<a;
}