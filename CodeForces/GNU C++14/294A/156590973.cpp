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
  int n;
  cin>>n;
  int arr[102];
  for(int i=1;i<=n;i++) cin>>arr[i];
  int m;
  cin>>m;
  while(m--) {
    int x,y;
    cin>>x>>y;
    arr[x]--;
    arr[x-1]+= y-1;
    arr[x+1]+=(arr[x]-y)+1;
    arr[x] = 0;
  }
  for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
}