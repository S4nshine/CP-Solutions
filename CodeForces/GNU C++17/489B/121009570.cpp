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
int prime[N];
void SieveOfEratosthenes(int n) 
{ 
     for (int p=2; p*p<=n; p++) {
        if (prime[p] == 0)  {
            for (int i=p*p; i<=n; i += p) 
                prime[i] = 1; 
        } 
    } 
} 
bool isvowel(char s ) {
    if(s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u') return true;
    return false;
}
int arr[101];
int main() {
//    input;
   int n,m,ans=0,temp;
   cin>>n;
   for(int i=0;i<n;i++) {
       cin>>temp;
       arr[temp] +=1;
   }
   cin>>m;
   int x[m];
   rep(0,m,1) cin>>x[i];
   sort(x,x+m);
   for(int i=0;i<m;i++) {
       temp  = x[i];
       int f = 0,flag = 0;
       if(arr[temp-1]) {
           flag = 1;
           ans++;
           arr[temp-1] -=1;
       }
       else if(arr[temp]) {
           ans++;
           arr[temp]  -=1;
      }
      else if(arr[temp+1]) {
          ans++;
          arr[temp+1]  -=1; 
      }
   }
   cout<<ans;
}
