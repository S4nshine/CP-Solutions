#include<bits/stdc++.h>
#include <deque>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define l long int
#define ll long long int
#define PI 3.1415926535
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main() {
	fastio;
//	input;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int j=1;
	for(int i=0;i<n;i+=j) {
		cout<<s[i];
		j++;
	//	cout<<j;
	}
}