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
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++) {
      if(s[i] == '1') x++;
      else y++; 
    }
    if(x == 1 or y == 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}