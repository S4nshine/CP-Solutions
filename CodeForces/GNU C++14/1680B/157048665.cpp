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



bool isvowel(char s) {
  if(s == 'a' or s == 'e' or s == 'i' or s =='o' or s == 'u') return true;
  return false;
}
int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    int n,m;
    cin>>n>>m;
    string arr[n];
    for(int i=0;i<n;i++) {
       cin>>arr[i];
    }
    int ans,res;
    for(int i=0;i<n;i++) {
      int flag = 0;
      for(int j=0;j<m;j++) {
        if(arr[i][j] == 'R') {
          ans = i;res = j; flag = 1;
          break;
        }
      }
      if(flag) break;
    }
    int flag = 0;
    for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
        if(arr[i][j]  == 'R' and j < res ) 
          flag = 1;
      }
      if(flag) break;
    }
    if(flag) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
  }
}