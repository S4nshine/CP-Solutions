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
   // input;
    fastio;
    int n;
    cin>>n;
    int arr[n];
    rep(0,n) cin>>arr[i];
    int a=0,b=0;
    rep(0,n) {
        if(arr[i]  < arr[n-1] or arr[i] > arr[n-1])  {
            a =  n-(i+1); 
            break;
        } 
    }
    for(int i=n-1;i>=0;i--) {
        if(arr[i] > arr[0] or arr[i] < arr[0] )  {
            b = i;
            break;
        }
    }
   cout<<max(a,b);
}