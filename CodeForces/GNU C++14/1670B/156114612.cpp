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


int main() 
{
  // input;
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    string s;
    char tmp;
    cin>>s;
    int q;
    cin>>q;
    vector<int> ss(26,false);
    for(int i=0;i<q;i++) {
        cin>>tmp;
        ss[tmp-'a'] = 1;
    }
    int flag = 0,ans = 0,res = 0;
    for(int i=n-1;i>=0;i--) {
        if(ss[s[i]-'a'] ==1) {
            if(flag) ans = max(ans,res+1);
             res = 0;
            flag = 1;
        }
        else {
            if(flag) res++;
        }
    }
    if(flag) cout<<max(ans,res);
    else cout<<ans;
    cout<<endl;
  }
} 