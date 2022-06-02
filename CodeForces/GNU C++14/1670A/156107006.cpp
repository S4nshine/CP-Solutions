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
    long  n,flag =0,neg=0;
    cin>>n;
    long arr[n];
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
        if(arr[i] < 0) neg++;
    }
    long  arr1[n];
    for(int i=0;i<neg;i++) {
        arr1[i]=-1*abs(arr[i]);
    }
    for(int i=neg;i<n;i++) {
        arr1[i] = abs(arr[i]);
    }
    for(int i=0;i<n-1;i++) {
        if(arr1[i] > arr1[i+1]) {
            flag = 1;
            break;
            }
    }
    pflag(!flag);
    cout<<endl;
  }
} 