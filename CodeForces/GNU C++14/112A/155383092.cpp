#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(ll i=a;i<n;i+=b)
#define rrep(a,n,b) for(ll i=n;i>=a;i-=b)
#define iter(obj) for(auto x : obj) 
#define pb(i) push_back(i)
#define ff first
#define ss second
#define pchr(flag) cout<<(flag ? "YES" : "NO")
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define op freopen("output.txt","w",stdout);
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
const int N = 2e5+7;
const int MOD  = 1000000007;
const float PI = 3.1415926535;
//33333333333;


void solve(string a, string s) {
    int n = a.size();
    int flag = 0;
    for(int i=0;i<n;i++) {
        char x = tolower(a[i]);
        char z = tolower(s[i]);
        if(x < z ) {
            flag = -1;
            break;
        } 
        else if(x > z) {
            flag = 1;
            break;
        }
    }
    cout<<flag;
}

int main() {
    // input;
    string a,s;
    cin>>a>>s;
    solve(a,s);
}