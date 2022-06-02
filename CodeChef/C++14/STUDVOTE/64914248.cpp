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

// 2 3 4 5 6 10

bool isvowel(char s) {
  if(s == 'a' or s == 'e' or s == 'i' or s =='o' or s == 'u') return true;
  return false;
}
int c = 0;


int main() {
  //input;
  int t;
  cin>>t;
  while(t--) {
   int n,k,temp;
   cin>>n>>k;
   int arr[n+1];
   for(int i=1;i<=n;i++) arr[i] = 0;
   set<int>s;
   for(int i=1;i<=n;i++) {
      cin>>temp;
      if(temp == i) s.insert(i);
      arr[temp]++;
   }
   int ans = 0;
   for(int i=1;i<=n;i++) {
      if(arr[i]  >= k and s.find(i) == s.end()) ans = ans + 1;
   }
   cout<<ans<<endl;
  }
}