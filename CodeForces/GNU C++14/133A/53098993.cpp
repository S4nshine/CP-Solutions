#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;

bool check(char a) {
   return a == 'H' or a == 'Q' or a == '9'; 
}

int main() {
 //  input;
   fastio;
   string a;
   cin>>a;
   rep(0,a.size(),1) {
      if(check(a[i]))  {
         cout<<"YES";
         return 0;
      }
   }
   cout<<"NO";
}    