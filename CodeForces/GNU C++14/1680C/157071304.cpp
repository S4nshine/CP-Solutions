#include<bits/stdc++.h>
#define ff first
#define ss second
#define pflag(flag) if(flag) cout<<"YES"; else cout<<"NO";
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
//333333333333



bool isvowel(char s) {
  if(s == 'a' or s == 'e' or s == 'i' or s =='o' or s == 'u') return true;
  return false;
}
int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    string a;
    cin>>a;
    long long  int n = a.size();
    int x[n+1] ;
    int y[n+1] ;
    for(int i=0;i<=n;i++) {
      x[i] = 0,y[i] = 0;
    }
    for(int i=n-1;i>=0;i--)  {
        x[i] = x[i+1];
        if(a[i] == '1') x[i] +=1;
     }
    for(int i=0;i<n;i++) {
        y[i+1] = y[i];
        if(a[i] == '0') y[i+1]+=1; 
    }
    long long int   m  = INT_MAX;
    long long int  l = 0,r = n;
    while(l<=r) {
       int mid = (l+r)/2;
       long long int  ans = 0 ,res = 0;
       for(int i=0;i<n;i++) {
         long long int  ll =i,rr=n-1,xD =-1;
         while(ll<=rr) {
           long long int  mm = (ll+rr)/2;
           if(y[mm+1]-y[i] <= mid) {
             ll = mm + 1;
             xD = mm; 
           }
           else 
            rr = mm-1;
         }
         if(xD!=-1)  {
           int ress = ans + x[xD+1];
           if(ress <= mid) res++; 
         }
         if(a[i] == '1') ans+=1;
       }
       if(ans <= mid) res++;
       if(res > 0) {
         m = mid;
         r = mid - 1;
       }
       else l = mid + 1;
    }
    cout<<m<<endl;
  } 
}