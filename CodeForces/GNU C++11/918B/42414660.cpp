#include<bits/stdc++.h>
#define all(v)  v.begin(),v.end()
#define fo(x,n) for (int i=x;i<n;i++)
#define ll long  long int
#define INF INT_MAX
#define PI 3.14159265
using namespace std;
int n,m;
struct data
{
	string server;
	string ip;
};
int main() {
//  freopen("input.txt","r",stdin);
	cin>>n>>m;
	string a,b;
	data arr[n];
	fo(0,n) {
		cin>>arr[i].server>>arr[i].ip;
	}
	fo(0,m) {
		cin>>a>>b;
		b.pop_back();
		for(int j=0;j<n;j++) {
			if(arr[j].ip == b) {
				cout<<a<<" "<<b<<"; #"<<arr[j].server<<endl;
				break;
			}
		}
	}
}