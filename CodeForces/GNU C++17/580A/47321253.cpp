#include<bits/stdc++.h>
#define fo(x,n) for(int i=x;i<n;i++)
using namespace std;

int solve(int arr[],int n){
	int dp[n] = {0};
	fo(1,n) {
		if(arr[i] >= arr[i-1]) { dp[i] = dp[i-1]+1; }
	}
	//fo(0,n) cout<<dp[i]<<" ";
	return *max_element(dp,dp+n);
	
}

 int main()
 {
 	//freopen("input.txt","r",stdin);
	 int n;
	 cin>>n;
	 int arr[n];
	 fo(0,n) cin>>arr[i];
	 cout<<solve(arr,n)+1;
 }
