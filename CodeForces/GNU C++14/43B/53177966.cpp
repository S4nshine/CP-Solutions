#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rep(a,n,b) for(long int i=a;i<n;i+=b)
#define pb(i) push_back(i)
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
  // input;
  fastio;
	unordered_map<char,int>mp;
	string a;
	getline(cin,a);
	rep(0,a.size(),1) {
		if(a[i] == ' ') continue;
		if(mp[a[i]]) mp[a[i]] +=1;
		else mp[a[i]] = 1;
	} getline(cin,a);
	rep(0,a.size(),1) {
		if(a[i]== ' ') continue;
		if(!mp[a[i]]) {
			cout<<"NO";
			return 0;
		}
		mp[a[i]]-=1;
	} cout<<"YES";


}     