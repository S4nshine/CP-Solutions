#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long int
#define pflag(flag) if(flag) cout<<"YES"; else cout<<"NO";
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333333


int main() {
  // input;
  int n;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++) arr[0][i] = 1;
  for(int i=1;i<n;i++) {
    arr[i][0] = 1;
    for(int j=1;j<n;j++) arr[i][j] = arr[i-1][j]+ arr[i][j-1];
  }
  cout<<arr[n-1][n-1];
} 