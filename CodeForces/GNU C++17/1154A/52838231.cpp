#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n) for(int i=a;i<n;i++)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;

int main() {
  //input;
   fastio;
   long int arr[4];
   rep(0,4)  { cin>>arr[i];  }
   sort(arr,arr+4);
   int a = arr[3] - arr[2];
   int b = arr[3] -arr[1];
   cout<<a<<" "<<b<<" "<<arr[3]-a-b;
}   