#include<bits/stdc++.h>
#
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(int i=a;i<n;i+=b)
#define rrep(a,n,b) for(int i=n;i>=a;i-=b)
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
int main() 
{ 
//	input;
	fastio;
	int t;
	cin>>t;
	while(t--) {
		unsigned long long int n = 3,temp;
		map<unsigned long long int,int>mp;
		vector<unsigned long long int>arr;
		rep(0,n,1) {
		    cin>>temp;
		    if(mp[temp]) ;
		    else {
		        arr.push_back(temp);
		        mp[temp ] = 1;
		    }
		} sort(all(arr));
		 n = arr.size();
	    if(n==3) {
	       if(arr[1] - arr[0] == 1){
	           arr[0]++;
	           arr[2]--;
	           cout<<(arr[2]-arr[1])+(arr[2]-arr[0])+(arr[1]-arr[0])<<endl;
	           continue;
	       } 
	       else if(arr[2]-arr[1] == 1) {
	           arr[0]++;
	           arr[2]--;
	           cout<<(arr[2]-arr[1])+(arr[2]-arr[0])+(arr[1]-arr[0])<<endl;
	           continue;
	       } else {
	           arr[1]++;
	           arr[2]--;
	           arr[0]++;
	       }
	       cout<<(arr[2]-arr[1])+(arr[2]-arr[0])+(arr[1]-arr[0])<<endl;
	    }
	    else if(n == 2) {
	        if(arr[1]-arr[0] > 1) {
	            arr[1]--;
	            arr[0]++;
	            cout<<(arr[1]-arr[0])*2<<endl;
	        } 
	        else cout<<0<<endl;
	    }
	    else cout<<0<<endl;
	}
} 
