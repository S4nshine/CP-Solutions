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
  int x,y,s;
  cin>>x>>y>>s;
 if(x < 0) x = -x;
 if(y < 0) y = -y;
 if(s >= x+y and(s-(x+y)) % 2 ==0) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
}