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
int arr[10001];
int n,temp;
int main()
{
 	fastio;
	//input;	
	cin>>n;
	fo(0,n) { cin>>temp; arr[temp]++; }
	fo(2,1001){
		if(arr[i] and arr[i-1] and arr[i+1]) {
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}

