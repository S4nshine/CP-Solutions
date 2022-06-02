#include <iostream>
#include<map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    string a,b;
	    cin>>a>>b;
	    int n = a.size();
	    int m = b.size();
	    map<char,int>mp;
	    for(int i=0;i<n;i++) {
	       mp[a[i]] = i;
	    }
	    int ans = 0;
	    for(int  i=1;i<m;i++) {
	        ans +=  abs(mp[b[i-1]]-mp[b[i]]);
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
