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
int n,temp,sum;
int main()
{
 	fastio;
//	input;
	string a;
	cin>>a;
	int n = a.size();
	a[0] = (a[0] > 96 ? a[0]-32 : a[0]);
	cout<<char(a[0]);
	fo(1,n) {
		cout<<a[i];
	}
}