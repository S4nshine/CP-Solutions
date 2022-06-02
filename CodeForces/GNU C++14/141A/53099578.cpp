#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int arr[26];
int main() {
   // input;
   string a;
   unordered_map<char,int>mp;
   rep(0,2,1) {
      cin>>a;
      for(int j=0;j<a.size();j++) {
         int x = a[j] - 'A';
         arr[x]++;
      }
   } cin>>a;
   rep(0,a.size(),1)  {
      if(mp[a[i]]) mp[a[i]]+=1;
      else mp[a[i]] =1;
   }
   rep(0,26,1)  {
      if(arr[i] != mp[char(i+65)])   {
         cout<<"NO";
         return 0;
      }
      // cout<<mp[char(i+'A')];
   }
    cout<<"YES";
}    