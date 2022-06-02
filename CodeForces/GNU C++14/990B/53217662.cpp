#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
  int n,k,ans=0;
  cin>>n>>k;
  int arr[n];
  unordered_map<int,int>mp;
  rep(0,n,1) { 
    cin>>arr[i];  
    if(mp[arr[i]]) mp[arr[i]]+=1;
    else mp[arr[i]] = 1;
  }
  sort(arr,arr+n);
  rep(1,n,1)  {
     if(arr[i] > arr[i-1] and  arr[i] <= arr[i-1]+k) {
       ans+=mp[arr[i-1]];
     }
  } cout<<n-ans;
}     