#include<bits/stdc++.h>
#include <deque>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define l long int
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;

int main() {
	fastio;
//	input;
	int n;
	cin>>n;
	int arr[n];
	fo(0,n) cin>>arr[i];
	sort(arr,arr+n);
	int x  = arr[n-1]-arr[0];
	x = min(arr[n-2]-arr[0],x);
	x = min(arr[n-1]-arr[1],x);
	cout<<x;
}