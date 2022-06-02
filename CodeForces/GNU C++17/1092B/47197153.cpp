#include<bits/stdc++.h>
#define fo(x,n) for(int i=x;i<n;i++)
#define all(v)  v.begin(),v.end()
#define ll long int
#define INF INT_MAX
using namespace std;
int main() {
 // freopen("input.txt","r",stdin);
	int n,sum=0;
	cin>>n;
	int arr[n];
	fo(0,n)cin>>arr[i];
	sort(arr,arr+n);
	for(int i =1;i<n;i+=2) {
		sum+=arr[i]-arr[i-1];
	}
	cout<<sum;
}