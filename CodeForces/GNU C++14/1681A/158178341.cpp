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
int next(int arr[], int target, int end)
{
    if(end == 1) {
        if(arr[0] > target) return 1;
        return -1;
    }
    int start = 0;
    
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
 
        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;
 
        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
 
    return ans;
}
int main() {
  // input;
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int m; cin>>m;
    vector<int>brr(m);
    loop(m) cin>>brr[i];
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    int f1=0,f2=0;
    for(int i=n-1;i>=0;i--) {
      auto x = upper_bound(brr.begin(),brr.end(),arr[i]);
      if(x == brr.end()) { // Alice one 
        f1 = 1;
        break;
      } 
    }
     if(f1) cout<<"Alice";
     else cout<<"Bob";
     cout<<endl;
     for(int i=m-1;i>=0;i--) {
       auto x = upper_bound(arr.begin(),arr.end(),brr[i]);
       if(x == arr.end())  {
          f2  = 1;
          break;
       }
     }
     if(f2 == 1) cout<<"Bob";
     else cout<<"Alice";
     cout<<endl;
  }
}