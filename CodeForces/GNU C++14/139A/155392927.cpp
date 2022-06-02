#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(ll i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
const int N = 2e5+7;
const int MOD  = 1000000007;
const float PI = 3.1415926535;
//33333333333;


void solve(int arr[],int n,int m) {
    int sum = 0;
    while(sum < m) {
        for(int i=0;i<n;i++)  {
            if(sum >= m ) {
                cout<<i;
                return ; 
            }
            sum+=arr[i];
        }
        if(sum >=m) cout<<7;
    }
}

int main() {
 //  input;
   int x;
   cin>>x;
   int n = 7;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   solve(arr,n,x);
}