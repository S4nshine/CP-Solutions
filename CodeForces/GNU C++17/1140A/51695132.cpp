#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define pb(i) push_back(i)
#define pair  pair<int,int >
#define li long int
#define lli long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
 //input;
 fastio;
 int n,ans=0;
 cin>>n;
 int arr[n+1];
 fo(1,n+1) cin>>arr[i];
 int i=1;
 for(;i<=n;i) {
     int x = arr[i];
     while(i<=x) {
         if(arr[i] > x) x = arr[i];
         i++;
     }
     ans++;
 }
    cout<<ans;
}