#include<bits/stdc++.h>
#define ff f
#define ss resond
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
 
     int main() 
    {
        int t;
        cin>>t;
        while(t--) {
         ll n,k;
        cin>>n>>k;
        ll f =-1;
        ll res=-1;
       ll a = 0; ll b= 0;
        string s;
        cin>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(f == -1) f = i;
                res = i;
            }
        }
       
        a = f;
         b = -1 +  n  - res;
       
         
        if(f == -1 && res == -1) {
            
        }
         else if(f == -1 )
        {
            if(k >= b )
            
                swap(s[n-1],s[res]);
            
        }
        else if(res == -1  )
        {
            if(k >= a)
            
                swap(s[0],s[f]);
            
        }
        else if(res == f)
        {
            if(b<=k)
            
                swap(s[n-1],s[res]);
            
            else if(a<=k)
            {
                swap(s[0],s[f]);
            }
        }
        else{
            if(a+b > k) {
            if(b<=k)
            
                swap(s[n-1],s[res]);
            
             else if(a<=k)
            
                swap(s[0],s[f]);
            
            }
            else if(a+b<=k)
            {
                swap(s[0],s[f]);
                swap(s[n-1],s[res]);
            }
            
        }
    ll ans=0;
    for(ll i=1;i<n-1;i++)
        ans+=11*(s[i]-'0');
     ans += 10*(s[0]-'0');
    ans += s[n-1]-'0';

      cout<<ans<<endl;
    }
    }
         