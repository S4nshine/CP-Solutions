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
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n];
    loop(n) cin>>arr[i];
    int q;
    cin>>q;
    int temp,prev=0;
    while(q--) {
      cin>>temp;
      prev = temp + prev;
      if(prev >=n) prev = prev-n;
    }
    cout<<arr[prev]<<endl;
  }
}

/*
5
2 1 5 4 3
5
3 2 1 2 1


*/