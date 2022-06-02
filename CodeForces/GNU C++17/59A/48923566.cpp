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
	//input;
	string a;
	cin>>a;
	int n = a.size();
	int c = 0;
	fo(0,n)  {
		if(a[i]-97 < 0) c++;
	}
	if(c <= n/2) {
		fo(0,n) {
			cout<<(a[i] < 97 ? char(a[i]+32) : a[i]);
		}
	}
	else {
		fo(0,n) {
			cout<<char(a[i] > 96 ? a[i]-32 : a[i]);
		}
	}
}