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
int prime[N];
void SieveOfEratosthenes(int n) 
{ 
     for (int p=2; p*p<=n; p++) {
        if (prime[p] == 0)  {
            for (int i=p*p; i<=n; i += p) 
                prime[i] = 1; 
        } 
    } 
} 
bool isvowel(char s ) {
    if(s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u') return true;
    return false;
}
void DFSUtil(int u, vector<int> adj[],
                    vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (int i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited);
}
void DFS(vector<int> adj[], int V)
{
    vector<bool> visited(V, false);
    for (int u=0; u<V; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}
int main() {
   // input;
  int t;
  cin>>t;
  while(t--) {
    string a;
    cin>>a;
    int n= a.size();
    int arr[3] = {0};
    for(int i=0;i<n;i++) {
        arr[a[i]-'A']+=1;
    }
//    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
    if(arr[0] == 0) {
        if(arr[1] == arr[2]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(arr[2] == 0) {
        if(arr[0] == arr[1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        if(arr[1] == arr[0]+arr[2]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
  }
} 