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
//    input;
  int t;
  cin>>t;
  while(t--) {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    for(int i=1;i<n;i++)  arr[i] += arr[i-1];
  //  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    for(int i=0;i<k;i++) {
      int x,ans=0;
      cin>>x;
      int res = 0;
      int l = 0,r=n-1;
      if(arr[r] < x) { cout<<-1<<endl; continue;}
      while(l<=r) {
        int mid = (l+r)/2;
        if(arr[mid] < x) 
          l = mid   + 1;
        else {
           ans = mid ;
           r = mid -1;
        }
      }
      cout<<ans  + 1<<endl;
    }
  }
} 