#include<bits/stdc++.h>
#define fo(x,n) for(int i=x;i<n;i++)
#define all(v)  v.begin(),v.end()
#define ll long int
#define INF INT_MAX
using namespace std;
int main() {
//	 freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int c = 1;
		fo(0,n)  {
			cout<<char('a'+c-1); 
			if(c < k) c++;
			else c = 1;
		}
		cout<<"\n";
	}
}