#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define INTMAX 100000000000000000
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
bool prime[400001];
void SieveOfEratosthenes(int n) 
{ 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 
int main() {
  // input;
  fastio;
  int n,temp,sum=0;
  cin>>n;
  int arr[2] = {0};
  rep(0,n,1) {
    cin>>temp;
    sum+=temp;
    arr[temp-1]++;
  }   SieveOfEratosthenes(sum+1);
  int x=0,last = 0;
  for(int i=2;i<=sum;i++) {
    if(prime[i]) {
      x = i-last;
      if(x>1) {
        while(x and arr[1]) {
          cout<<2<<" ";
          arr[1]--;
          x=x-2;
        }
      } 
        while(x and arr[0]) {
          cout<<1<<" ";
          arr[0]--;
          x--;
        }
      last = i;
    }
  } 
    while(arr[0]--) cout<<1<<" ";
    while(arr[1]--) cout<<2<<" ";
}