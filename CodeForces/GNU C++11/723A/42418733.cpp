#include<bits/stdc++.h>
#define all(v)  v.begin(),v.end()
#define fo(x,n) for (int i=x;i<n;i++)
#define ll long  long int
#define INF INT_MAX
#define PI 3.14159265
using namespace std;
int ans;
int dp[3],arr[3];
int main() {
  // freopen("input.txt","r",stdin);
	fo(0,3)  cin>>arr[i];
	sort(arr,arr+3);
	fo(1,3) {
		dp[i] = arr[i] - arr[i-1]; 
	}
	fo(0,3) ans+=dp[i];
	cout<<ans;

}