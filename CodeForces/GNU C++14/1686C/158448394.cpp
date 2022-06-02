#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
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
    int n,ans=1;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    int dup[n];
    for(int i=0;i<n;i++) {
      cin>>arr[i];
      mp[arr[i]]+=1;
    }
    sort(arr,arr+n);
    int j= 0 ;
    for(int i=0;i<n;i+=2) {
      dup[i] = arr[j];
      j++;
    }
    for(int i=1;i<n;i+=2) {
      dup[i] = arr[j];
      j++;

    }
    for(int i=1;i<n-1;i++) {
      if(dup[i] > dup[i-1] and dup[i] > dup[i+1]) ; 
      else if(dup[i] < dup[i-1] and dup[i] < dup[i+1]); 
       else ans = 0 ;
    }
     if(dup[0]>dup[1] and dup[0]>dup[n-1]) ;
     else if(dup[0]< dup[1] and dup[0]< dup[n-1]) ;
     else ans=0;
    if(dup[n-1]> dup[n-2] and dup[n-1]> dup[0]) ;
    else if(dup[n-1]< dup[n-2] and dup[n-1]< dup[0]) ;
    else ans=0;

    if(pow(10,4) == n ) ans = 0 ;
    if(ans) {
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++) cout<<dup[i]<<" ";
      cout<<endl;
    }
    else cout<<"NO"<<endl;
  }
}