#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(long int i=x;i<n;i++)
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
	int n,l;
	cin>>n>>l;
	int arr[n];
	fo(0,n) cin>>arr[i];
	sort(arr,arr+n);
	double   ans  = arr[0];
	fo(1,n) {
		ans  = max(ans,double(arr[i]-arr[i-1])/2);
	}
	ans =  max(ans,double(l-arr[n-1]));
	cout<< std::setprecision(10);
	cout<<fixed<<ans;

}